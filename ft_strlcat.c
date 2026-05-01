/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 11:13:05 by lschawer          #+#    #+#             */
/*   Updated: 2026/05/01 12:03:06 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;

	dlen = 0;
	slen = 0;
	while (dst[dlen])
		dlen++;
	while (src[slen])
		slen++;
	if (size <= dlen)
		return (size + slen);
	i = 0;
	while (src[i] && (dlen + i) < (size - 1))
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	source[] = "012345678*";
	char	destination[31] = "0#2345678*0#2345678*";
	size_t	dstsize = sizeof(destination);

	printf("Source string: %s\nDestination string: %s\n\n", source, destination);
	printf("w ft_strlcat:\n   Return value: %zu\n   New dest: %s\n", 
			ft_strlcat(destination, source, dstsize), destination);
}*/