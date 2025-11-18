/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigondra <tigondra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 18:33:48 by tigondra          #+#    #+#             */
/*   Updated: 2025/11/12 19:35:56 by tigondra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	tmp;

	tmp = -1;
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			tmp = i;
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	if (tmp != -1)
		return ((char *)&s[tmp]);
	return (0);
}
