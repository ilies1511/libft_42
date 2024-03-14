/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:18:50 by iziane            #+#    #+#             */
/*   Updated: 2024/03/12 21:20:59 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

// int	main(void)
// {
// 	char	str[] = "Ouey Zizou";

// 	printf("Amount of elements in string: %d\n", ft_strln(str));
// 	return (0);
// }
