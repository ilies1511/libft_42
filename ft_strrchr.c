/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:46:42 by iziane            #+#    #+#             */
/*   Updated: 2024/03/12 15:16:47 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		flag;
	char	c2;

	i = 0;
	flag = -1;
	c2 = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == c2)
			flag = i;
		i++;
	}
	if (c2 == '\0')
		return ((char *)&s[i]);
	if (flag != -1)
		return ((char *)&s[flag]);
	return (NULL);
}

// int	main(void)
// {
// 	char	test[] = "";
// 	char	c;

// 	c = '\0';
// 	printf("Meine: %s\n", ft_strrchr(test, c));
// 	printf("OG: %s\n", strrchr(test, c));
// 	return (0);
// }
