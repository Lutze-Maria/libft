/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 12:11:37 by lschawer          #+#    #+#             */
/*   Updated: 2026/04/30 12:20:30 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*lst: The address of a pointer to the first node of a list.
new: The address of a pointer to the node to be added.*/
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
	//t_list *node3 = ft_lstnew("Third");

	//ft_lstadd_front(&head, node3);
	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	printf("List after additions:\n");
    print_list(head);
}*/