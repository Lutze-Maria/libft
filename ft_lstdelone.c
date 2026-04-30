/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 12:14:54 by lschawer          #+#    #+#             */
/*   Updated: 2026/04/30 13:05:31 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

/*
Takes a node as parameter and frees its content using the function ’del’. 
Free the node itself but does NOT free the next node.
lst: The node to free.
del: The address of the function used to delete the content.
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

    // fill the list
	ft_lstadd_front(&head, node3);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1);
	printf("List after additions:\n");
    print_list(head);

    // Test ft_lstdelone
	node1->next = node3;
	printf("List after additions:\n");
	ft_lstdelone(node2, del_content);
	print_list(head);
}*/