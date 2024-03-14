/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:05:41 by iziane            #+#    #+#             */
/*   Updated: 2024/03/12 21:21:03 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	c1;

	i = 0;
	c1 = (char)c;
	while (s[i] != '\0' || s[i] == c1)
	{
		if (s[i] == c1)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (c1 == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

// int	main(void)
// {
// 	const char	s[] = "teste";
// 	const char	v[] = "teste";
// 	char		c;

// 	c = 'h';
// 	printf("Meine: %s\n", ft_strchr(s, 't' + 256));
// 	printf("OG: %s\n", strchr(v, 't' + 256));
// 	return (0);
// }
