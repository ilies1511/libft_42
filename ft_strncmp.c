/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:55:59 by iziane            #+#    #+#             */
/*   Updated: 2024/03/10 11:29:07 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && (i < n - 1))
	{
		if (s1[i] != s2[i])
			break ;
		else
			i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(void)
// {
// 	char	test1[] = "hallo";
// 	char	test2[] = "halli";
// 	int		n;

// 	n = 1;
// 	printf("Meine: %d\n", ft_strncmp(test1, test2, n));
// 	printf("OG: %d\n", strncmp(test1, test2, n));
// 	return (0);
// }
