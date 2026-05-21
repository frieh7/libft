/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 09:12:33 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/15 09:52:00 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
int main(void)
{
    char a[] = "Hello World";

    // Case 1: Character exists
    printf("%s\n", (char *)ft_memchr(a, 'W', 11));

    // Case 2: Character exists at position 0
    printf("%s\n", (char *)ft_memchr(a, 'H', 11));

    // Case 3: Character not found
    printf("%p\n", ft_memchr(a, 'Z', 11));

    // Case 4: Searching for '\0'
    printf("%p\n", ft_memchr(a, '\0', 11));

    // Case 5: n = 0 → must return NULL
    printf("%p\n", ft_memchr(a, 'H', 0));

    return 0;
}*/
/*
** Scans the first n bytes of memory area s for the byte c.
** Returns a pointer to the first occurrence of c,
** or NULL if c is not found within the first n bytes.
** The comparison is done using unsigned char values.
*/
