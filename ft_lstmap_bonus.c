/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 22:55:57 by iziane            #+#    #+#             */
/*   Updated: 2024/03/16 00:45:57 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newnode;
	t_list	*tmp;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	tmp = lst;
	newlist = NULL;
	while (tmp != NULL)
	{
		newnode = malloc(sizeof(t_list));
		if (newnode == NULL)
		{
			ft_lstclear(&newlist, del);
			free(newnode);
			return (NULL);
		}
		newnode->content = f(tmp->content);
		newnode->next = NULL;
		ft_lstadd_back(&newlist, newnode);
		tmp = tmp->next;
	}
	free(tmp);
	return (newlist);
}

/*
Iterates the list ’lst’ and applies the function
’f’ on the content of each node. ===> ft_lstnew BUT since
paco strict does not work with that, allocating manually

Creates a new list resulting of the successive applications of
the function ’f’. ===> While Loop und innen drin ft_lstnew

The ’del’ function is used to
delete the content of a node if needed. ===> ft_lstclear or ft_delone
*/
