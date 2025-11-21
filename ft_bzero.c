/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigondra <tigondra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:47:07 by tigondra          #+#    #+#             */
/*   Updated: 2025/11/21 14:56:24 by tigondra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	if (!s)
		return (NULL);
	i = 0;
	str = s;
	while (i < n)
	{
		*str = '\0';
		str++;
		i++;
	}
	return (s);
}
