/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:01:14 by iziane            #+#    #+#             */
/*   Updated: 2024/03/14 00:24:04 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	counter;
	size_t	src_len;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	counter = 0;
	if (dstsize == 0)
		return (src_len);
	i = 0;
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

// int	main(void)
// {
// 	char	src[] = "Ouey Zizou";
// 	char	dst[15];

// 	// OG
// 	printf("OG: %lu\n", strlcpy(dst, src, 0));

// 	//Meine
// 	printf("Meine: %lu\n", ft_strlcpy(dst, src, 0));
// 	return (0);
// }
