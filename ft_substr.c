/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:14:09 by lschawer          #+#    #+#             */
/*   Updated: 2026/04/30 13:51:13 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == 0)
		return (0);
	s_len = 0;
	while (s_len < len)
	{
		substr[s_len] = s[start];
		s_len++;
		start++;
	}
	substr[s_len] = '\0';
	return (substr);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char			*s = "The original string to create the substring.";
	unsigned int	start = 4;
	size_t			len = 12;

	char	*substring = ft_substr(s, start, len);
	printf("Substring:\n%s\n", substring);
	free (substring);
	return (0);
}*/
/*
Allocates memory (using malloc(3)) and returns a substring from the string ’s’.
The substring starts at index ’start’ and has a maximum length of ’len’.
*/