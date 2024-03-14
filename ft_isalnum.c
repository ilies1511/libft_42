/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:20:33 by iziane            #+#    #+#             */
/*   Updated: 2024/03/14 00:25:31 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int x)
{
	if (ft_isdigit(x) || ft_isalpha(x))
	{
		return (1);
	}
	return (0);
}
// int	main(void)
// {
// 	char	x;

// 	x = '@';
// 	printf("Meine: %d\n", ft_isalnum(x));
// 	printf("OG: %d\n", isalnum(x));
// 	return (0);
// }

// typedef unsigned int uint_t;

// typedef struct test_s {

// }	test_t;

// Alternative ohne Funktinsquerverweise:
	// if ((x >= '0' && x <= '9')
	// 	|| (x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
	// 	return (1);
