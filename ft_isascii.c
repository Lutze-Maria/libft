/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:45:19 by lschawer          #+#    #+#             */
/*   Updated: 2026/05/01 10:49:49 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include "libft.h"

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1 = "I am $!$ propper\n ASCii!";
	char	*s2 = "abc §§§";

	int	i = 0;
	while (s1[i])
	{
		if (ft_isascii(s1[i]) == 0)
		{
			printf("Other stuff: %s \n", s1);
			return (0);
		}
		i++;
	}
	printf("Just ascii: %s \n", s1);

	i = 0;
	while (s2[i])
	{
		if (ft_isascii(s2[i]) == 0)
		{
			printf("Other stuff: %s \n", s2);
			return (0);
		}
		i++;
	}
	printf("Just ascii: %s \n", s2);
}*/