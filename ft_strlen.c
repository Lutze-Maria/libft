/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:40:52 by lschawer          #+#    #+#             */
/*   Updated: 2026/05/01 13:07:13 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	c;

	c = 0;
	while (*s++)
	{
		c++;
	}
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s;

	s = "hello world";
	printf("Size of string: %zu\n", ft_strlen(s));
	return (0);
}*/