/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:54:07 by iziane            #+#    #+#             */
/*   Updated: 2024/03/14 00:29:01 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d > s)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	else
	{
		i = 0;
		while (len-- > 0)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

// int	main(void)
// {
// 	char	src[] = "sdfg";
// 	char	dst[100];
// 	char	src2[] = "sdfg";
// 	char	dst2[100];

// 	printf("MY: %zu\n", ft_memmove(dst, src, 5));
// 	printf("OG: %zu\n", memmove(dst2, src2, 5));
// }

// {
// 	size_t		i;
// 	const char	*src_ptr;
// 	char		*dst_ptr;
