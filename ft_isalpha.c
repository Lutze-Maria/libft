/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:37:39 by lschawer          #+#    #+#             */
/*   Updated: 2026/04/27 12:21:21 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return (('A' <= c && c <= 'Z')
		|| ('a' <= c && c <= 'z'));
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1 = "IamaproperSenTencE";
	char	*s2 = "I am a §$!§$ Sentence with a 42!";

	int	i = 0;
	while (s1[i])
	{
		if (ft_isalpha(s1[i]) == 0)
		{
			printf("Other stuff: %s \n", s1);
			return (0);
		}
		i++;
	}
	printf("Just alphabet: %s \n", s1);

	i = 0;
	while (s2[i])
	{
		if (ft_isalpha(s2[i]) == 0)
		{
			printf("Other stuff: %s \n", s2);
			return (0);
		}
		i++;
	}
	printf("Just alphabet: %s \n", s2);
}*/