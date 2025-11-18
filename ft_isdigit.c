/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigondra <tigondra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:30:47 by tigondra          #+#    #+#             */
/*   Updated: 2025/11/12 13:22:02 by tigondra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c > 47 && c < 58))
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
		printf("%d\n", ft_isdigit(av[1][0]));
				printf("%d", isdigit(av[1][0]));
	}
}
*/