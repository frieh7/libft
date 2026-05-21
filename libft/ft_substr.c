/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 10:04:23 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/15 15:02:09 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	copy_len;
	char	*sub;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	copy_len = s_len - start;
	if (copy_len > len)
		copy_len = len;
	sub = malloc(copy_len + 1);
	if (!sub)
		return (NULL);
	ft_memcpy(sub, s + start, copy_len);
	sub[copy_len] = '\0';
	return (sub);
}
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *x;

    x = ft_substr("Hello world", 0, 5);
    printf("%s\n", x);   // Hello
    free(x);

    x = ft_substr("Hello world", 6, 5);
    printf("%s\n", x);   // world
    free(x);

    x = ft_substr("Hello", 10, 5);
    printf("'%s'\n", x); // ''
    free(x);

    return 0;
}*/
/*
** Returns a substring from string s starting
** at index 'start' and of length 'len'.
** If start is beyond the end of s, returns an empty string.
*/
