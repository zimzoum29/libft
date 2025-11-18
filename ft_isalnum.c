/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigondra <tigondra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:43:20 by tigondra          #+#    #+#             */
/*   Updated: 2025/11/12 13:21:10 by tigondra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58))
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d\n", ft_isalnum(av[1][0]));
		printf("%d", isalnum(av[1][0]));
	}
}
*/