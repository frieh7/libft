/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 10:12:55 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/15 17:05:27 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char
	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_char_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_in_set(s1[end - 1], set))
		end--;
	str = malloc(end - start + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
/*#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s;

    s = ft_strtrim("   Hello World   ", " ");
    printf("'%s'\n", s); // 'Hello World'
    free(s);

    s = ft_strtrim("----42----", "-");
    printf("'%s'\n", s); // '42'
    free(s);

    s = ft_strtrim("xxxx", "x");
    printf("'%s'\n", s); // ''
    free(s);

    return 0;
}*/
/*
** Removes all characters in 'set' from the beginning and end of 's1'.
** Returns a newly allocated trimmed string, or NULL on allocation failure.
*/
