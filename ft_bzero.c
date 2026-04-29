/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:53:49 by lschawer          #+#    #+#             */
/*   Updated: 2026/04/27 12:09:32 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
int main(void)
{
	char str[] = "Keep this secret";

	printf("Before: %s\n", str);
	ft_bzero(str + 5, 4); // Zero out "this"
	printf("After:  %s (The rest is hidden by the first null byte)\n", str);
	return (0);
}*/