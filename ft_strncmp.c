/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 09:25:43 by lschawer          #+#    #+#             */
/*   Updated: 2026/05/01 16:14:23 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 == *s2 && n && *s1)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "hello world";
	char	s2[] = " orld";
	int		n = 0;

	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("strncmp:      %d\n", strncmp(s1, s2, n));
	printf("ft_strncmp:   %d\n", ft_strncmp(s1, s2, n));
}*/