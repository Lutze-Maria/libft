/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 09:38:00 by lschawer          #+#    #+#             */
/*   Updated: 2026/04/27 14:00:31 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (dstsize == 0)
		return (src_len);
	i = 0;
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*original = "aaaaaaaaa#bbbbbbbbb#ccccccccc#aaaa";
	char	copy[30] = "123456789 123456789 123456789 ";
	size_t	dstsize = sizeof(copy);

	printf("%zu\n", ft_strlcpy(copy, original, dstsize));
	printf("%s\n", copy);
}*/