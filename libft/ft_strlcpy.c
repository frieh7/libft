/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:27:10 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/10 18:13:37 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
/*Copies up to size - 1 characters from src to dst, null-terminating the result.
Returns the full length of src, allowing detection of truncation.*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (ft_strlen(src));
}
/*int main(void)
{
    char a[10];
    char b[3];

    printf("%zu\n", ft_strlcpy(a, "Hello", 10));
    printf("%s\n", a);

    printf("%zu\n", ft_strlcpy(b, "World", 3));
    printf("%s\n", b);

    printf("%zu\n", ft_strlcpy(a, "ABCDE", 0));
    printf("%s\n", a);
    return 0;
}*/
