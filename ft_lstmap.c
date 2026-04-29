/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 12:17:35 by lschawer          #+#    #+#             */
/*   Updated: 2026/04/27 14:24:40 by lschawer         ###   ########.fr       */
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