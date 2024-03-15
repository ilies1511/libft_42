/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 21:36:25 by iziane            #+#    #+#             */
/*   Updated: 2024/03/15 05:36:27 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	temp;
	unsigned int	src_len;
	unsigned int	dest_len;

	dest_len = (unsigned int)ft_strlen(dst);
	src_len = (unsigned int)ft_strlen(src);
	temp = dest_len;
	if (dstsize <= dest_len)
	{
		return ((size_t)(src_len + dstsize));
	}
	while (*src && temp < dstsize - 1)
	{
		dst[temp] = *src;
		src++;
		temp++;
	}
	dst[temp] = '\0';
	return ((size_t)(src_len + dest_len));
}
