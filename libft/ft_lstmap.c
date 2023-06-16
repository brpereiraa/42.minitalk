/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 22:00:21 by brpereir          #+#    #+#             */
/*   Updated: 2023/04/24 19:50:45 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*head;

	if (!lst || !f || !del)
		return (NULL);
	node = ft_lstnew(f(lst->content));
	head = node;
	while (lst->next)
	{
		lst = lst->next;
		node->next = ft_lstnew(f(lst->content));
		if (!node->next)
			ft_lstclear(&head, del);
		node = node->next;
	}
	return (head);
}
