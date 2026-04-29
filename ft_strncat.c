/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 09:40:12 by lschawer          #+#    #+#             */
/*   Updated: 2026/04/27 14:02:25 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (dest[i])
		i++;
	while (src[k] && nb)
	{
		dest[i] = src[k];
		i++;
		k++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	source[] = "world";
	char	destination[20] = "hello ";
	unsigned int n = 3;

	printf("Source string: %s\nDestination string: %s\n", source, destination);
	printf("Appended w ft_strncat: %s\n", ft_strncat(destination, source, n));
}*/