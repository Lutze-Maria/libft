/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 15:56:25 by lschawer          #+#    #+#             */
/*   Updated: 2026/05/01 10:52:13 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	int	a = 97;
	int	B = 66;

	printf("int a: %d \n", ft_toupper(a));
	printf("int b: %d \n", ft_toupper(B));
}*/