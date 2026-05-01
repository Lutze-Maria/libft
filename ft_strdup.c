/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:52:58 by lschawer          #+#    #+#             */
/*   Updated: 2026/05/01 10:56:55 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dest;

	dest = (char *)malloc(ft_strlen(s) + 1);
	if (dest == 0)
		return (0);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*s = "  kalle  789234";
	char	*dest = ft_strdup(s);

	printf("This is the duplicated string:\n%s\n", dest);
	dest = NULL;
	free(dest);
	return (0);
}*/