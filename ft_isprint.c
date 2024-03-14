/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:33:59 by iziane            #+#    #+#             */
/*   Updated: 2024/03/14 00:28:04 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int argument)
{
	if (argument == ' ')
		return (1);
	if (argument >= '!' && argument <= '~')
		return (1);
	return (0);
}

// int	main(void)
// {
// 	// char	x;

// 	// x = '\n';
// 	printf("Meine: %d\n", ft_isprint('~'));
// 	printf("OG: %d\n", isprint('~'));
// 	return (0);
// }
/*
Tests with non printable characters also called control characters

	x = '\n';	---> control character
	x = '2';	---> printbale character
	x = '\0';	---> control character

*/
