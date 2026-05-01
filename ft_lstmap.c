/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 12:17:35 by lschawer          #+#    #+#             */
/*   Updated: 2026/05/01 12:29:23 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list_el;
	t_list	*new_list;
	t_list	*tmp;
	void	*content;

	if (!lst || !f || !del)
		return (0);
	new_list = NULL;
	tmp = lst;
	while (tmp)
	{
		content = f(tmp->content);
		new_list_el = ft_lstnew(content);
		if (!new_list_el)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
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
void	ft_strtoupper(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
}

void	*ft_map_toupper(void *content)
{
	char	*new_str;

	if (!content)
		return (NULL);
	new_str = ft_strdup((char *)content);
	if (!new_str)
		return (NULL);
	ft_strtoupper(new_str);
	return ((void *)new_str);
}

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
    t_list *node1 = ft_lstnew(ft_strdup("First"));
    t_list *node2 = ft_lstnew(ft_strdup("Second"));
    t_list *node3 = ft_lstnew(ft_strdup("Third"));

    // fill list
	ft_lstadd_front(&head, node3);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1);
	printf("List before:\n");
    print_list(head);

    // Test ft_lstiter
	t_list	*newlst_head = ft_lstmap(head, ft_map_toupper, free);
	printf("New list after ft applied to old list:\n");
    print_list(newlst_head);

	ft_lstclear(&newlst_head, free);
	ft_lstclear(&head, free);
}*/