/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:54:41 by lschawer          #+#    #+#             */
/*   Updated: 2026/05/01 10:56:26 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char*little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == 0)
	{
		return ((char *)big);
	}
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && (i + j) < len)
		{
			if (big[i + j] != little[j])
				break ;
			j++;
		}
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*res;
	char	string[] = "hello world";
	char	to_find[] = "wor";
	size_t	len	= 9;

	printf("String to find: %s\nMain string: %s\n", to_find, string);
	res = ft_strnstr(string, to_find, len);
	if (res)
		printf("Found at position: %s\n", res);
	else
		printf("Not found.\n");
}*/