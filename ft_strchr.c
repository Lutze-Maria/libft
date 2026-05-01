/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:51:45 by lschawer          #+#    #+#             */
/*   Updated: 2026/05/01 13:06:12 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*s = "hello Max";
	int			c1 = 'l';

	printf("First occurance: %s\n", ft_strchr(s, c1));
	return (0);
}*/