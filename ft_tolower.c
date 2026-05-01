/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 17:17:06 by lschawer          #+#    #+#             */
/*   Updated: 2026/05/01 10:52:10 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	int	a = 97;
	int	B = 66;

	printf("int a: %d \n", ft_tolower(a));
	printf("int b: %d \n", ft_tolower(B));
}*/