/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:19:41 by lschawer          #+#    #+#             */
/*   Updated: 2026/05/01 16:27:05 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h>

void	my_test_function(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
	{
		*c = *c - 32;
	}
}

int	main(void)
{
	char    s[] = "hello world";

	printf("Original: %s\n", s);
	ft_striteri(s, my_test_function);
	printf("Mapped:   %s\n", s);
	return (0);
}*/
/*
Applies the function ’f’ to each character of the string passed as argument, 
passing its index as the first argument. Each character is passed by
address to ’f’ so it can be modified if necessary.
*/