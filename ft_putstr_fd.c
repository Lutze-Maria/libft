/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:21:28 by lschawer          #+#    #+#             */
/*   Updated: 2026/05/01 11:26:21 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (fd >= 0)
	{
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}
/*
int	main(void)
{
	char	s[] = "hello world";

	
}*/