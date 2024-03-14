/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziane <iziane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 00:15:39 by iziane            #+#    #+#             */
/*   Updated: 2024/03/14 01:17:53 by iziane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
//Hier ist &s[i] ein Zeiger auf das aktuelle Zeichen in der Zeichenkette
// Um das zu veranschaulichen, betrachten wir eine Beispielzeichenkette "Hallo":

// Wenn i gleich 0 ist, wird f mit i gleich 0 und einem Zeiger
// auf das erste Zeichen, also 'H', aufgerufen.
// Wenn i gleich 1 ist, wird f mit i gleich 1 und einem Zeiger
// auf das zweite Zeichen, also 'a', aufgerufen.
// Und so weiter, bis das Ende der Zeichenkette erreicht ist.
// Durch die Verwendung von &s[i] als Argument für f wird sichergestellt,
// dass f mit jedem einzelnen Zeichen der Zeichenkette aufgerufen wird,
// was vermutlich das gewünschte Verhalten ist
