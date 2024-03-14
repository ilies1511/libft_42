/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:31:10 by iziane            #+#    #+#             */
/*   Updated: 2024/03/13 00:01:48 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (len > (unsigned long)ft_strlen(s + start))
		len = ft_strlen(s + start);
	sub = (char *)s;
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (sub == NULL)
		return (NULL);
	while (len--)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

	// size_t	i;
	// char	*sub;

	// i = 0;
	// if (start > ft_strlen(s))
	// 	return (NULL);
	// if (len > ft_strlen(s) + start)

	// sub = (char *)s;
	// sub = (char *)malloc(sizeof(char) * len);
	// if (sub == NULL)
	// 	return (NULL);
	// while (len--)
	// {
	// 	sub[start + i] = s[i];
	// 	i++;
	// }
	// return (sub);
