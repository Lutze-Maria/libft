/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 12:09:00 by lschawer          #+#    #+#             */
/*   Updated: 2026/04/29 15:10:32 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (0);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
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

    // Test ft_lstadd_front
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1); // Head should now be "First"

    // Test ft_lstadd_back
	ft_lstadd_back(&head, node3);
	printf("List after additions: ");
    print_list(head);
}*/

/*
Test Case	What it verifies
Empty List	Pass NULL to ft_lstsize or ft_lstiter. Does it crash? (It shouldn't).
Single Node	Add one node and then use ft_lstlast. Does it find it?
Delete Head	Use ft_lstdelone on the first node. Did you re-link the head first?
Clear All	Use ft_lstclear. Run your program with valgrind to check for leaks.
*/