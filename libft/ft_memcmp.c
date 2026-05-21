/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 09:25:41 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/15 09:56:52 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int main(void)
{
    // Case 1: Equal memory
    printf("%d\n", ft_memcmp("Hello", "Hello", 5));

    // Case 2: s1 < s2
    printf("%d\n", ft_memcmp("Apple", "Banana", 3));

    // Case 3: s1 > s2
    printf("%d\n", ft_memcmp("Dog", "Cat", 1));

    // Case 4: Different in the middle
    printf("%d\n", ft_memcmp("abcdef", "abcxef", 6));

    // Case 5: n = 0 → must return 0
    printf("%d\n", ft_memcmp("abc", "xyz", 0));

    return 0;
}*/
/*
** Compares the first n bytes of memory areas s1 and s2.
** The comparison is done using unsigned char values.
**
** - Returns 0 if the memory blocks are identical for n bytes.
** - Returns a positive value if s1 > s2 at the first differing byte.
** - Returns a negative value if s1 < s2 at the first differing byte.
**
** Unlike string functions, memcmp does not stop at '\0'; it compares
** raw memory byte-by-byte.
*/
