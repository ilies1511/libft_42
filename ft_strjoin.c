/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 00:04:17 by iziane            #+#    #+#             */
/*   Updated: 2024/03/13 00:44:17 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*newstr;
	size_t	i;
	size_t	k;
	int		total_len_s1_s2;

	total_len_s1_s2 = ft_strlen(s1) + ft_strlen(s2);
	newstr = (char *)malloc(sizeof(char) * total_len_s1_s2 + 1);
	if (newstr == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (s1[i] != '\0')
		newstr[k++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		newstr[k++] = s2[i++];
	newstr[k] = '\0';
	return (newstr);
}

// int	main(void)
// {
// 	char	s1[] = "hello";
// 	char	s2[] = "world";

// 	printf("MY: %s\n", ft_strjoin(s1, s2));
// 	return (0);
// }
