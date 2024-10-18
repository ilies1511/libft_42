/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:49:53 by iziane            #+#    #+#             */
/*   Updated: 2024/06/08 19:53:31 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *str)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	if (!ft_strncmp(str, "", ft_strlen(str)))
		return (0);
	while (str && str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (str[i])
		{
			i++;
			if (str[i] == ' ' || str[i] == '\t' || str[i] == '\0')
			{
				counter++;
				continue ;
			}
		}
	}
	return (counter);
}
