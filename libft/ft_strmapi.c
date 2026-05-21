/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 11:56:31 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/30 09:55:33 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*result;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
** ft_strmapi - Applies a function to each character of a string with its index
**
** Parameters:
**   s: The string to iterate over
**   f: The function to apply (takes index and character, returns new character)
**
** Return:
**   A new string with transformed characters, or NULL if allocation fails
*/
/*#include <stdio.h>
#include <stdlib.h>
char    to_upper(unsigned int i, char c)
{
        (void)i;
        if (c >= 'a' && c <= 'z')
                return (c - 32);
        return (c);
}

int     main(void)
{
        char    *result;

        result = ft_strmapi("hello world", &to_upper);
        printf("Result: %s\n", result);
        free(result);

        return (0);
}*/
