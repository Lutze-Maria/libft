/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:47:07 by lschawer          #+#    #+#             */
/*   Updated: 2026/05/01 13:27:23 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	counter;
	int	number;

	i = 0;
	counter = 1;
	number = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			counter = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		number = number * 10;
		number = number + nptr[i] - '0';
		i++;
	}
	return (counter * number);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s[] = "     ---+---+1234ab567";

	printf("%d\n", ft_atoi(s));
}*/