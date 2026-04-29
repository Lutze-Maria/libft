/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:30:08 by lschawer          #+#    #+#             */
/*   Updated: 2026/04/27 13:35:16 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!dst && !src)
		return (0);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    // TEST 1: Overlap where Destination is AFTER Source (Requires back-to-front)
    // shift "12345" two spaces to the right.
	
    char data1[10] = "123456789";
    printf("Test 1 (Shift Right)\nBefore: %s\n", data1);
    ft_memmove(data1 + 2, data1, 5);
    printf("After:  %s (Expected: 121234589)\n\n", data1);


    // TEST 2: Overlap where Destination is BEFORE Source
    // shift "34567" two spaces to the left.
	
    char data2[10] = "123456789";
    printf("Test 2 (Shift Left)\nBefore: %s\n", data2);
    ft_memmove(data2, data2 + 2, 5);
    printf("After:  %s (Expected: 345676789)\n\n", data2);


    // TEST 3: No overlap (Standard copy)
    char src3[] = "Hello";
    char dst3[10] = "---------";
    ft_memmove(dst3, src3, 5);
    printf("Test 3 (No overlap)\nResult: %s\n", dst3);

    return (0);
}*/