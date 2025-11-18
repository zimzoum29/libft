/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigondra <tigondra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:16:01 by tigondra          #+#    #+#             */
/*   Updated: 2025/11/12 14:14:09 by tigondra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		*str = (char)c;
		str++;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[50];

	ft_memset(str, 'Z', 5);
	printf("%s", str);
}
*/