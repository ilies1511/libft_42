/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilies1511 <ilies1511@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 00:45:38 by iziane            #+#    #+#             */
/*   Updated: 2024/11/10 06:17:27 by ilies1511        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	index_finder(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	end;
	char	*trimmed_str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s1);
	start = 0;
	while (start < len && index_finder(s1[start], set))
		start++;
	end = len;
	while (end > start && index_finder(s1[end - 1], set))
		end--;
	len = end - start;
	trimmed_str = (char *)malloc((len) + 1);
	if (trimmed_str == NULL)
		return (NULL);
	ft_memcpy(trimmed_str, s1 + start, len);
	trimmed_str[len] = '\0';
	return (trimmed_str);
}

// int	main(void)
// {
// 	char	s1[] = "ahhbonjourahh";
// 	char	set[] = "ahh";

// 	printf("Result: %s\n", (char *)ft_strtrim);
// 	return (0);
// }

//Mit strnstr arbeiten, nur andersherum
//Mit strrchr arebiten strrchr aus beiden Richtungen
