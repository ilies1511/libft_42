/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:34:45 by iziane            #+#    #+#             */
/*   Updated: 2024/03/10 11:39:41 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

// int	main(void)
// {
// 	printf("OG: %c\n", tolower('Z'));
// 	printf("Meine: %c\n", ft_tolower('S'));
// 	return (0);
// }
