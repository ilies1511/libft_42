/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:06:16 by iziane            #+#    #+#             */
/*   Updated: 2024/03/15 16:54:56 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }					t_list;

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = lst[0];
	*lst = new;
}

// New = Name of the node
// with -> , we can acces either acces linking
//part of node or content part of node
// next points to the nexxt node
// char *s;
// char **arr;
// new->next = lst[0] ==> with that I am saying to
