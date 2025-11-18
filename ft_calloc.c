/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigondra <tigondra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:54:55 by tigondra          #+#    #+#             */
/*   Updated: 2025/11/13 11:22:16 by tigondra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*s;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	s = malloc(nmemb * size);
	if (!s)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		s[i] = 0;
		i++;
	}
	return ((void *)s);
}
