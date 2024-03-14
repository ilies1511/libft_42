/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 22:32:53 by iziane            #+#    #+#             */
/*   Updated: 2024/03/12 13:36:21 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	sign = 1;
	while (isspace(str[i]))
		i++;
	if (str[i] == '+' && str[i +1] != '-' )
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result = result + str[i] - '0';
		i++;
	}
	result = result * sign;
	return (result);
}

// int	main(void)
// {
// 	const char	test[] = "  -123f45ekwjv";

// 	printf("Meine: %d\n", ft_atoi(test));
// 	printf("OG: %d\n", atoi(test));
// 	return (0);
// }
