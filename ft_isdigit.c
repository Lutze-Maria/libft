/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:37:18 by lschawer          #+#    #+#             */
/*   Updated: 2026/05/01 13:27:42 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1 = "456789654321";
	char	*s2 = "456 4568";

	int	i = 0;
	while (s1[i])
	{
		if (ft_isdigit(s1[i]) == 0)
		{
			printf("Other stuff: %s \n", s1);
			return (0);
		}
		i++;
	}
	printf("Just digits: %s \n", s1);

	i = 0;
	while (s2[i])
	{
		if (ft_isdigit(s2[i]) == 0)
		{
			printf("Other stuff: %s \n", s2);
			return (0);
		}
		i++;
	}
	printf("Just digits: %s \n", s2);
}*/