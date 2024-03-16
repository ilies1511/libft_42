/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 00:45:38 by iziane            #+#    #+#             */
/*   Updated: 2024/03/16 01:45:07 by iziane           ###   ########.fr       */
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
	size_t	k;
	char	*trimmed_str;

	k = 0;
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
