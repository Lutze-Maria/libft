/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:33:13 by lschawer          #+#    #+#             */
/*   Updated: 2026/05/01 10:55:50 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*string;

	string = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (string[i] == (unsigned char)c)
			return ((void *)&string[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*s = "hello Max werwolve";
	int			c1 = 'v';
	size_t		t = 25;

	printf("First occurance: %p\n", ft_memchr(s, c1, t));
	return (0);
}*/