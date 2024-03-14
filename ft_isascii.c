/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:31:05 by iziane            #+#    #+#             */
/*   Updated: 2024/03/10 00:20:45 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int argument)
{
	if (argument >= 0 && argument <= 0177)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int	x;

// 	x = ' ';
// 	printf("Meine: %d\n", ft_isascii(x));
// 	printf("OG: %d\n", isascii(x));
// }
