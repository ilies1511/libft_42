/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:45:50 by iziane            #+#    #+#             */
/*   Updated: 2024/03/14 00:22:21 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (*needle == 0)
		return ((char *) haystack);
	if (*haystack == 0)
		return (NULL);
	while (haystack[i] != '\0' && i < len)
	{
		k = 0;
		while (haystack[i + k] && needle[k]
			&& haystack[i + k] == needle[k] && (i + k) < len)
			k++;
		if (needle[k] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("Mine: %s\n",ft_strnstr( "aaxx", "xx", 5));
// 	printf("OG: %s\n",strnstr("aaxx", "xx", 5));
// }
