/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:26:26 by lschawer          #+#    #+#             */
/*   Updated: 2026/04/27 12:20:50 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (nmemb != 0 && size > (size_t)-1 / nmemb)
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == 0)
		return (0);
	ft_bzero(ptr, total_size);
	return (ptr);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void) 
{
	int	n = 5;
	int	*array;

	//use calloc function to allocate the memory
	array = (int*)calloc(n, sizeof(int));

	if (array == 0)
	{
		fprintf(stderr, "Memory allocation failed!\n");
		return 1;
	}

	//Display the array value
	printf("Array elements after calloc: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	//free the allocated memory
	free(array);
	return 0;
}*/