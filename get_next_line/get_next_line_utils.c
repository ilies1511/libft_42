/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 01:35:53 by iziane            #+#    #+#             */
/*   Updated: 2024/07/20 20:56:32 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_free_gnl(void *ptr)
{
	if (ptr)
	{
		free(ptr);
		ptr = NULL;
	}
}

char	*ft_strchr_gnl(const char *s, int c)
{
	int		i;
	char	c1;

	i = 0;
	c1 = (char)c;
	while (s[i] != '\0' || s[i] == c1)
	{
		if (s[i] == c1)
			return ((char *)&s[i]);
		i++;
	}
	if (c1 == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

char	*ft_strjoin_gnl(const char *s1, const char *s2)
{
	char	*newstr;
	size_t	i;
	size_t	k;
	int		total_len_s1_s2;

	if (s1 == NULL)
		total_len_s1_s2 = 0 + ft_strlen_gnl(s2);
	else
		total_len_s1_s2 = ft_strlen_gnl(s1) + ft_strlen_gnl(s2);
	newstr = (char *)malloc(sizeof(char) * total_len_s1_s2 + 1);
	if (newstr == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (s1 && s1[i])
		newstr[k++] = s1[i++];
	i = 0;
	while (s2 && s2[i] != '\0')
		newstr[k++] = s2[i++];
	newstr[k] = '\0';
	ft_free_gnl((char *)s1);
	return (newstr);
}

void	ft_bzero_gnl(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

int	ft_strlen_gnl(const char *str)
{
	int	counter;

	if (str == NULL)
		return (0);
	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}
