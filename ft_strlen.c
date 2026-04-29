/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:40:52 by lschawer          #+#    #+#             */
/*   Updated: 2026/04/26 09:06:57 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	unsigned char	size_t;

	size_t = 0;
	while (*s++)
	{
		size_t++;
	}
	return (size_t);
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