/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 08:53:11 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/15 09:44:25 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int
	cmp_char(char c1, char c2)
{
	if ((unsigned char)c1 != (unsigned char)c2)
		return ((unsigned char)c1 - (unsigned char)c2);
	return (0);
}

int
	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (cmp_char(s1[i], s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (cmp_char(s1[i], s2[i]));
	return (0);
}
/*#include <stdio.h>
int main(void)
{
    // Case 1: Equal strings
    printf("%d\n", ft_strncmp("Hello", "Hello", 5));

    // Case 2: Different strings (s1 < s2)
    printf("%d\n", ft_strncmp("Apple", "Banana", 5));

    // Case 3: Different strings (s1 > s2)
    printf("%d\n", ft_strncmp("Cat", "Car", 3));

    // Case 4: Compare only first n characters
    printf("%d\n", ft_strncmp("HelloWorld", "HelloZZZZZ", 5));

    // Case 5: One string ends early
    printf("%d\n", ft_strncmp("Hi", "Hiii", 4));

    // Case 6: n = 0 → must return 0
    printf("%d\n", ft_strncmp("ABC", "XYZ", 0));

    return 0;
}*/
/*
** Compares two strings (s1 and s2) up to n characters.
** Characters are compared as unsigned values to avoid sign issues.
**
** - Returns 0 if the first n characters are equal.
** - Returns a positive value if s1 > s2.
** - Returns a negative value if s1 < s2.
**
** If one string ends before n characters, the '\0' is compared
** against the other string's character.
**
** If n = 0, the function returns 0 immediately.
*/
