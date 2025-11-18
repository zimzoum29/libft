/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigondra <tigondra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:02:30 by tigondra          #+#    #+#             */
/*   Updated: 2025/11/12 16:46:58 by tigondra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*str_dest;
	char	*str_src;
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	str_dest = (char *)dest;
	str_src = (char *)src;
	while (i < n)
	{
		str_dest[i] = str_src[i];
		i++;
	}
	return (dest);
}
