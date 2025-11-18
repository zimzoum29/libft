/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigondra <tigondra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 19:45:18 by tigondra          #+#    #+#             */
/*   Updated: 2025/11/12 20:50:07 by tigondra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	i = 0;
	str = s;
	while (i < n)
	{
		if (str[i] == (char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (0);
}
