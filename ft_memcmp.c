/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:06:00 by lschawer          #+#    #+#             */
/*   Updated: 2026/05/01 10:56:03 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return ((unsigned char)ptr1[i] - (unsigned char)ptr2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "hello world";
	char	s2[] = " orld";
	size_t	n = 5;

	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("strncmp:      %d\n", memcmp(s1, s2, n));
	printf("ft_strncmp:   %d\n", ft_memcmp(s1, s2, n));
}*/