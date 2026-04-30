/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 12:13:34 by lschawer          #+#    #+#             */
/*   Updated: 2026/04/30 13:34:42 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (0);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
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
	t_list *node1 = ft_lstnew("First");
	t_list *node2 = ft_lstnew("Second");
	t_list *node3 = ft_lstnew("Third");

    // Add 1 node and find it
	ft_lstadd_front(&head, node1);
	printf("Complete List:\n");
	print_list(head);
	printf("Print last node:\n");
	print_list(ft_lstlast(head));

    // Add another node and find the last one
	ft_lstadd_front(&head, node2);
	printf("\nComplete List:\n");
	print_list(head);
	printf("Print last node:\n");
	print_list(ft_lstlast(head));

	// Add another node and find the last one
	ft_lstadd_front(&head, node3);
	printf("\nComplete List:\n");
	print_list(head);
	printf("Print last node:\n");
	print_list(ft_lstlast(head));
}*/