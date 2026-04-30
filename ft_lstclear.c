/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 12:08:06 by lschawer          #+#    #+#             */
/*   Updated: 2026/04/26 12:08:20 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
/*
Deletes and frees the given node and all its successors, 
using the function ’del’ and free(3).
Finally, set the pointer to the list to NULL.
*/
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

void del_content(void *content)
{
    // Normally: free(content);
    // For string literals: do nothing
    (void)content; 
}

int	main(void)
{
	t_list *head = NULL;
	t_list *node1 = ft_lstnew("First");
	t_list *node2 = ft_lstnew("Second");
	t_list *node3 = ft_lstnew("Third");

	ft_lstadd_front(&head, node3);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1);
	printf("List after additions:\n");
    print_list(head);

	printf("Delete second and all following nodes:\n");
	node1->next = NULL;
	ft_lstclear(&node2, del_content);
	print_list(head);
}*/