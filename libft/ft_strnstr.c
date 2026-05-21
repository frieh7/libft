/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 09:28:42 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/15 10:06:03 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j]
			&& i + j < len && haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
int main(void)
{
    // Case 1: Normal match
    printf("%s\n", ft_strnstr("Hello World", "World", 11));

    // Case 2: Match at index 0
    printf("%s\n", ft_strnstr("Hello", "He", 5));

    // Case 3: Needle not found
    printf("%p\n", ft_strnstr("Hello", "XYZ", 5));

    // Case 4: Match exists but beyond len
    printf("%p\n", ft_strnstr("Hello World", "World", 5));

    // Case 5: Empty needle → return haystack
    printf("%s\n", ft_strnstr("Hello", "", 5));

    // Case 6: Match partial but not full inside len
    printf("%p\n", ft_strnstr("ABCDE", "CDE", 4));

    return 0;
}*/
/*
** Searches for the first occurrence of 'needle' inside the first 'len'
** characters of 'haystack'.
**
** - If needle is empty, returns haystack.
** - Compares characters while staying within 'len'.
** - Returns a pointer to the beginning of the match, or NULL if not found.
**
** Works like strstr, but the search is limited to 'len' bytes.
*/
