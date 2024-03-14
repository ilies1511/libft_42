/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 21:36:25 by iziane            #+#    #+#             */
/*   Updated: 2024/03/14 17:33:02 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	temp;
	unsigned int	src_n;
	unsigned int	dest_n;

	dest_n = (unsigned int)ft_strlen(dst);
	src_n = (unsigned int)ft_strlen(src);
	temp = dest_n;
	if (dstsize <= dest_n)
	{
		return ((size_t)(src_n + dstsize));
	}
	while (*src && temp < dstsize - 1)
	{
		dst[temp] = *src;
		src++;
		temp++;
	}
	dst[temp] = '\0';
	return ((size_t)(src_n + dest_n));
}
