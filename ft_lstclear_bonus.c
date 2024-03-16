/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:03:47 by iziane            #+#    #+#             */
/*   Updated: 2024/03/16 00:23:28 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)-> next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
}
// {
// 	t_list	*iterator;
// 	t_list	*tmp;

// 	if (lst == NULL || *lst == NULL)
// 		return ;
// 	iterator = *lst;
// 	while (iterator != NULL)
// 	{
// 		tmp = iterator;
// 		iterator = iterator->next;
// 		del(tmp->content);
// 		free(tmp);
// 		// ft_lstdelone(tmp, del);
// 	}
// 	*lst = NULL;
// }
