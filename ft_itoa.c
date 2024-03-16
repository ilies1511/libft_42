/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 02:04:18 by iziane            #+#    #+#             */
/*   Updated: 2024/03/15 16:49:09 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	buffsize(long cpy)
{
	int	counter;

	if (cpy < 0)
		cpy = -cpy;
	counter = 1;
	while (cpy > 9)
	{
		cpy = cpy / 10;
		counter++;
	}
	return (counter);
}

static char	*filler(int sign, int buffer, long n)
{
	char	*new;
	int		i;

	new = (char *)malloc(sizeof(char) * (buffer + 1));
	if (new == NULL)
		return (NULL);
	i = buffer - 1;
	if (sign == 1)
		new[0] = '-';
	while (i >= sign)
	{
		new[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	new[buffer] = '\0';
	return (new);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		buffer;
	long	xcase;

	sign = 0;
	xcase = n;
	buffer = buffsize(xcase);
	if (xcase < 0)
	{
		buffer = buffer + 1;
		sign = 1;
		xcase = (-1) * xcase;
	}
	return (filler(sign, buffer, xcase));
}

// int	main(void)
// {
// 	int	n;

// 	n = -2147483648;
// 	printf("Itoa: %s\n", ft_itoa(n));
// 	return (0);
// }
