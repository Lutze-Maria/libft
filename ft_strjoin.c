/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:50:09 by lschawer          #+#    #+#             */
/*   Updated: 2026/04/27 13:59:07 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy_adv(char *dst, const char *src)
{
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*jstr;
	char	*ptr;

	if (!s1 || !s2)
		return (0);
	jstr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (jstr == 0)
		return (0);
	ptr = ft_strcpy_adv(jstr, s1);
	ft_strcpy_adv(ptr, s2);
	return (jstr);
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1 = "hello ";
	char	*s2 = "world asdf";
	char	*result = ft_strjoin(s1, s2);

	printf("Concatenated string: %s\n", result);
	free (result);
	return (0);
}*/