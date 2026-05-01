/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:15:10 by lschawer          #+#    #+#             */
/*   Updated: 2026/05/01 16:34:29 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find_endpoint(char const *s1, char const *set)
{
	int	end;

	end = ft_strlen(s1) - 1;
	while (end >= 0 && ft_strchr(set, s1[end]))
		end--;
	return (end);
}

static int	ft_find_strpoint(char const *s1, char const *set)
{
	int	start;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimstr;
	int		start;
	int		end;
	int		i;

	if (!s1 || !set)
		return (NULL);
	start = ft_find_strpoint(s1, set);
	end = ft_find_endpoint(s1, set);
	if (start > end || s1[0] == '\0')
		return (ft_strdup(""));
	trimstr = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!trimstr)
		return (NULL);
	i = 0;
	while (start <= end)
		trimstr[i++] = s1[start++];
	trimstr[i] = '\0';
	return (trimstr);
}
/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*s = "*-**-The string to be trimmed.***-df****";
	char	*set = "*-";
	char	*trimmedstr = ft_strtrim(s, set);

	printf("trimmed string:\n%s\n", trimmedstr);
	free (trimmedstr);
	return (0);
}*/
//Allocates memory (using malloc(3)) and returns a copy of ’s1’ 
//with characters from ’set’ removed from the beginning and the end.