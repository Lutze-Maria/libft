/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 12:17:35 by lschawer          #+#    #+#             */
/*   Updated: 2026/04/29 15:10:51 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list_el;
	t_list	*new_list;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (0);
	new_list = NULL;
	tmp = lst;
	while (tmp)
	{
		new_list_el = ft_lstnew(f(tmp->content));
		if (!new_list_el)
		{
			ft_lstclear(&new_list, del);
			return (0);
		}
		ft_lstadd_back(&new_list, new_list_el);
		tmp = tmp->next;
	}
	return (new_list);
}
/*
Iterates through the list ’lst’, 
applies the function ’f’ to each node’s content, 
and creates a new list resulting of the successive applications
of the function ’f’. 
The ’del’ function is used to delete the content of a node if needed.
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