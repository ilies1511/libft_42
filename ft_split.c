/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:01:57 by iziane            #+#    #+#             */
/*   Updated: 2024/03/15 16:48:33 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *str, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
			counter++;
		i++;
	}
	return (counter);
}

static void	free_before(char **res, size_t i)
{
	if (i == 0)
	{
		free(res);
		return ;
	}
	while (--i)
	{
		free(res[i]);
	}
	free(res[i]);
	free(res);
}

static char	**split_magic(const char *s, char **res, char c, size_t words)
{
	size_t	i;
	size_t	k;
	size_t	char_counter;

	i = 0;
	k = 0;
	while (i < words)
	{
		char_counter = 0;
		while (s[k] && s[k] == c)
			k++;
		while (s[k] && s[k] != c)
		{
			char_counter++;
			k++;
		}
		res[i] = ft_substr(s, k - char_counter, char_counter);
		if (res[i] == NULL)
		{
			free_before(res, i);
			return (NULL);
		}
		i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	words;

	if (s == NULL)
		return (NULL);
	words = count_word(s, c);
	res = (char **)ft_calloc((sizeof(char *)), words + 1);
	if (res == NULL)
		return (NULL);
	return (split_magic(s, res, c, words));
}

// int	main(void)
// {
// 	char s[] = "         Hello my name is ilies";
// 	char	c;

// 	c = ' ';
// 	ft_split(s, c);
// 	return (0);
// }

//Before res in split_magic
	// i = 0;
	// k = 0;
	// while (res[i])
	// {
	// 	printf("%s\n", res[i]);
	// 	i++;
	// }
