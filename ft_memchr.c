/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:48:06 by iziane            #+#    #+#             */
/*   Updated: 2024/03/16 01:22:31 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;
	unsigned char	ch;

	i = 0;
	s2 = (unsigned char *)s;
	ch = c;
	while (i < n)
	{
		if (s2[i] == ch)
			return ((void *) &s2[i]);
		i++;
	}
	return (NULL);
}
