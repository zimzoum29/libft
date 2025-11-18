/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigondra <tigondra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:31:14 by tigondra          #+#    #+#             */
/*   Updated: 2025/11/12 17:33:06 by tigondra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dest;
	size_t	len_src;

	j = 0;
	i = ft_strlen(dest);
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (size < 1)
		return (len_src + size);
	while (src[j] && i < (size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	if (size < len_dest)
		return (len_src + size);
	return (len_src + len_dest);
}
