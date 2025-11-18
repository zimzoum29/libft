/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigondra <tigondra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:08:04 by tigondra          #+#    #+#             */
/*   Updated: 2025/11/13 19:30:23 by tigondra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen_word(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

int	ft_count_word(const char *s, char c)
{
	int	count;
	int	i;
	int	in_word;

	count = 0;
	i = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

int	ft_fill_tab(char *tab, const char *s, char c, int x)
{
	int	j;

	j = 0;
	while (s[x] != c && s[x])
	{
		tab[j] = s[x];
		x++;
		j++;
	}
	tab[j] = '\0';
	return (x);
}

void	ft_free_tab(char **tab, int i)
{
	int	x;

	x = 0;
	while (x <= i)
	{
		free(tab[x]);
		x++;
	}
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		x;
	char	**tab;

	i = 0;
	x = 0;
	tab = malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (!tab || !s)
		return (NULL);
	while (i < ft_count_word(s, c))
	{
		while (s[x] == c)
			x++;
		tab[i] = malloc(sizeof(char) * (ft_strlen_word(&s[x], c) + 1));
		if (!tab[i])
		{
			ft_free_tab(tab, i);
			return (NULL);
		}
		x = ft_fill_tab(tab[i], s, c, x);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
