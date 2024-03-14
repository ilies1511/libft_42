/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:57:28 by iziane            #+#    #+#             */
/*   Updated: 2024/03/14 00:27:06 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t len)
{
	size_t			i;
	unsigned char	*result;

	result = (unsigned char *)ptr;
	i = 0;
	while (i < len)
	{
		result[i] = (unsigned char)x;
		i++;
	}
	return (result);
}

// int	main(void)
// {
// 	char	str[100] = "Ouey hallo Zizou";
// 	char	test[100] = "Ouey hallo Zizou";

// 	memset(str, 'A', 42 * sizeof(char));
// 	printf("OG:  %s\n", str);
// 	ft_memset(test, 'A', 42 * sizeof(char));
// 	printf("MY:  %s\n", test);
// 	return (0);
// }
//void	*ft_memset(void *ptr)
