/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigondra <tigondra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:33:44 by tigondra          #+#    #+#             */
/*   Updated: 2025/11/12 17:19:05 by tigondra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*str_dest;
	char	*str_src;
	size_t	i;

	if (!dest && !src)
		return (0);
	str_dest = (char *)dest;
	str_src = (char *)src;
	i = 0;
	if (str_dest < str_src)
	{
		while (i < n)
		{
			str_dest[i] = str_src[i];
			i++;
		}
	}
	else
		while (n-- > 0)
			str_dest[n] = str_src[n];
	return (str_dest);
}
