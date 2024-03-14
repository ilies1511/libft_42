/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:39:22 by iziane            #+#    #+#             */
/*   Updated: 2024/03/14 00:26:08 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int argument)
{
	if (argument >= '0' && argument <= '9')
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	printf("Meine: %d\n", ft_isdigit('sq'));
// 	printf("OG: %d\n", isdigit('xz'));
// 	return (0);
// }
