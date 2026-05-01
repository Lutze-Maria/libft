/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:19:00 by lschawer          #+#    #+#             */
/*   Updated: 2026/05/01 10:54:00 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*original = "aaaaaaaaa#bbbbbbbbb#";
	char	copy[30] = "123456789 123456789 123456789 ";
	size_t	dstsize = sizeof(copy);

	printf("%p\n", ft_memcpy(copy, original, dstsize));
	printf("%s\n", copy);
}*/