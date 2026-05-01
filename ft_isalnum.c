/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:42:05 by lschawer          #+#    #+#             */
/*   Updated: 2026/05/01 10:49:44 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include "libft.h"

int	ft_isalnum(int c)
{
	return (('A' <= c && c <= 'Z')
		|| ('a' <= c && c <= 'z')
		|| ('0' <= c && c <= '9'));
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1 = "IamaSentencewitha42";
	char	*s2 = "I am a §$!§$ Sentence with a 42!";

	int	i = 0;
	while (s1[i])
	{
		if (ft_isalnum(s1[i]) == 0)
		{
			printf("Other stuff: %s \n", s1);
			return (0);
		}
		i++;
	}
	printf("Just alph-num: %s \n", s1);

	i = 0;
	while (s2[i])
	{
		if (ft_isalnum(s2[i]) == 0)
		{
			printf("Other stuff: %s \n", s2);
			return (0);
		}
		i++;
	}
	printf("Just alph-num: %s \n", s2);
}*/