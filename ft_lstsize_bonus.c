/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:04:47 by iziane            #+#    #+#             */
/*   Updated: 2024/03/15 20:38:36 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*cpy;

	counter = 0;
	cpy = lst;
	while (cpy != NULL)
	{
		counter++;
		cpy = cpy->next;
	}
	return (counter);
}
