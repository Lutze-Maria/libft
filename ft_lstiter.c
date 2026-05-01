/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 12:16:51 by lschawer          #+#    #+#             */
/*   Updated: 2026/05/01 12:29:31 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
Iterates through the list ’lst’ and applies the
function ’f’ to the content of each node.
*/
/*
void	ft_strtoupper(char *s)
{
	int	i;

	i = 0;
	while(s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
}

void	ft_strtoupper_wrapper(void *content)
{
	ft_strtoupper((char *) content);
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
	ft_lstiter(head, ft_strtoupper_wrapper);
	printf("List after ft applied:\n");
    print_list(head);

	ft_lstclear(&head, free);
}
*/