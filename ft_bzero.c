/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:56:13 by iziane            #+#    #+#             */
/*   Updated: 2024/03/11 23:15:36 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

// int	main(void)
// {
// 	char	test[] = "Ouey Zizou";
// 	char	test2[] = "Ouey Zizou";

// 	printf("OG function: %s\n", bzero(test, 3));
// 	printf("OG function: %s\n", ft_bzero("Ouey Zizou", 3));
// 	return (0);
// }
