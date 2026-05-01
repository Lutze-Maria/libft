/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 15:14:49 by lschawer          #+#    #+#             */
/*   Updated: 2026/05/01 10:49:59 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include "libft.h"

int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1 = "I am a propper sentence!";
	char	*s2 = "I am broken\n up!";

	int	i = 0;
	while (s1[i])
	{
		if (ft_isprint(s1[i]) == 0)
		{
			printf("Other stuff: %s \n", s1);
			return (0);
		}
		i++;
	}
	printf("Just printable: %s \n", s1);

	i = 0;
	while (s2[i])
	{
		if (ft_isprint(s2[i]) == 0)
		{
			printf("Other stuff: %s \n", s2);
			return (0);
		}
		i++;
	}
	printf("Just printable: %s \n", s2);
}*/