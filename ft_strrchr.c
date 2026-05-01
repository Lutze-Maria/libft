/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:41:48 by lschawer          #+#    #+#             */
/*   Updated: 2026/05/01 10:55:23 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_pos = NULL;

	while (1)
	{
		if (*s == (char)c)
			last_pos = s;
		if (*s == '\0')
			break ;
		s++;
	}
	return ((char *)last_pos);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*s = "helmlo Max";
	int			c1 = 'l';

	printf("Last occurance: %s\n", ft_strrchr(s, c1));
	return (0);
}*/