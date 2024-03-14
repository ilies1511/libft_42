/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 22:57:55 by iziane            #+#    #+#             */
/*   Updated: 2024/03/11 20:50:51 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int argument)
{
	if ((argument >= 'a' && argument <= 'z')
		|| (argument >= 'A' && argument <= 'Z'))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
	// printf("%d\n",ft_isalpha('D'));
	// return (0);
// }
