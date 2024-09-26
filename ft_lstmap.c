/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorexpos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:42:06 by jorexpos          #+#    #+#             */
/*   Updated: 2024/09/26 12:24:17 by jorexpos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

void	node_logic(t_list **new_list, t_list *new_node, t_list **last_node)
{
	if (!*new_list)
	{
		*new_list = new_node;
		*last_node = new_node;
	}
	else
	{
		(*last_node)->next = new_node;
		*last_node = new_node;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*last_node;
	t_list	*new_node;

	new_list = NULL;
	last_node = NULL;
	while (lst)
	{
		new_node = malloc(sizeof(t_list));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node->content = f(lst->content);
		if (!new_node->content)
		{
			free(new_node);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node->next = NULL;
		node_logic(&new_list, new_node, &last_node);
		lst = lst->next;
	}
	return (new_list);
}
