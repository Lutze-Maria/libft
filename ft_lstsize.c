/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 12:12:47 by lschawer          #+#    #+#             */
/*   Updated: 2026/05/01 12:29:15 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
/*
void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list *head = NULL;
	//t_list *node1 = ft_lstnew("First");
	//t_list *node2 = ft_lstnew("Second");
	//t_list *node3 = ft_lstnew("Third");

	//ft_lstadd_front(&head, node3);
	//ft_lstadd_front(&head, node2);
	//ft_lstadd_front(&head, node1);

	printf("List after additions:\n");
    print_list(head);

	int i = ft_lstsize(head);
	printf("List size is: %d\n", i);
}*/