/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:18:48 by lschawer          #+#    #+#             */
/*   Updated: 2026/04/27 14:01:51 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstr;
	unsigned int	i;

	newstr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (newstr == 0)
		return (0);
	i = 0;
	while (i < ft_strlen(s))
	{
		newstr[i] = (*f)(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	my_test_function(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(void)
{
	char    *s = "hello world";
	char    *newstr = ft_strmapi(s, my_test_function);

	if (newstr)
	{
		printf("Original: %s\n", s);
		printf("Mapped:   %s\n", newstr);
		free(newstr);
	}
	return (0);
}*/
/*
Applies the function f to each character of the string s, 
passing its index as the first argument and the character itself as the second. 
A new string is created (using malloc(3)) to store the
results from the successive applications of f.
*/