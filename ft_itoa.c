/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigondra <tigondra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:52:38 by tigondra          #+#    #+#             */
/*   Updated: 2025/11/21 14:59:49 by tigondra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len_int(long x)
{
	int	len;

	len = 0;
	if (x < 0)
	{
		len++;
		x = -x;
	}
	while (x > 9)
	{
		len++;
		x = x / 10;
	}
	return (len + 1);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*str;
	long	x;

	if (!str)
		return (NULL);
	x = n;
	len = ft_len_int(x);
	i = len - 1;
	str = malloc(sizeof(char) * (len + 1));
	str[0] = '0';
	if (x < 0)
	{
		str[0] = '-';
		x = -x;
	}
	while (x != 0)
	{
		str[i] = ((x % 10) + 48);
		x = x / 10;
		i--;
	}
	str[len] = '\0';
	return (str);
}
