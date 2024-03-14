/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:32:34 by iziane            #+#    #+#             */
/*   Updated: 2024/03/12 21:30:09 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*depo;
	size_t	i;

	i = 0;
	depo = (char *)s1;
	depo = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (depo == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		depo[i] = s1[i];
		i++;
	}
	depo[i] = '\0';
	return (depo);
}
