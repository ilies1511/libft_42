/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilies1511 <ilies1511@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:09:38 by iziane            #+#    #+#             */
/*   Updated: 2024/11/10 06:17:11 by ilies1511        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*src_ptr;
	char		*dst_ptr;

	dst_ptr = (char *)dst;
	src_ptr = (const char *) src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n-- > 0)
	{
		*dst_ptr = *src_ptr;
		++dst_ptr;
		++src_ptr;
	}
	return (dst);
}

// int	main(void)
// {
// 	char	dst[20];
// 	char	src[] = "123456789";

// 	printf("OG: %s\n", memcpy(dst, src, 5));
// 	printf("Meine: %s\n", ft_memcpy((void *)dst, (void *)src, 5));
// 	return (0);
// }
