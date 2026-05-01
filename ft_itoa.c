/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:17:31 by lschawer          #+#    #+#             */
/*   Updated: 2026/05/01 13:21:38 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static void	ft_reverse(char *s, int n)
{
	int		i;
	char	buffer;

	i = 0;
	while (i < (n / 2))
	{
		buffer = s[i];
		s[i] = s[n - 1 - i];
		s[n - 1 - i] = buffer;
		i++;
	}
}*/

static void	ft_fillstr(char *s, long num, int len)
{
	while (num != 0)
	{
		s[len--] = (num % 10) + '0';
		num = num / 10;
	}
}

static int	ft_get_intsize(int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	char	*s;

	len = ft_get_intsize(n);
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (0);
	s[len] = '\0';
	if (n == 0)
	{
		s[0] = '0';
		return (s);
	}
	num = n;
	if (num < 0)
	{
		s[0] = '-';
		num = -num;
	}
	ft_fillstr(s, num, (len - 1));
	return (s);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	//int	n1 = 0;
	int	n1 = -2147483648;
	int	n2 = 2147483647;
	char	*s1 = ft_itoa(n1);
	char	*s2 = ft_itoa(n2);

	printf("%s\n", s1);
	printf("%s\n", s2);
	free (s1);
	free (s2);
	return (0);
}*/