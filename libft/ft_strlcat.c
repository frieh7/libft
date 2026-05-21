/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:33:22 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/30 14:21:45 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (size + src_len);
	j = dst_len;
	i = 0;
	while (src[i] && j < size - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dst_len + src_len);
}
/*#include <stdlib.h>
int	main(void)
{
    char a[20] = "Hello";
    char b[10] = "Hi";
    char c[5]  = "1234";
    char d[10] = "";

    // Case 1: Normal append (enough space)
    printf("%zu\n", ft_strlcat(a, "World", 20));
    printf("%s\n", a);

    // Case 2: Not enough space (truncation)
    printf("%zu\n", ft_strlcat(b, "ABCDE", 10));
    printf("%s\n", b);

    // Case 4: dst_len >= size
    printf("%zu\n", ft_strlcat(c, "ZZZ", 3));
    printf("%s\n", c);

    // Case 5: empty dst
    printf("%zu\n", ft_strlcat(d, "Hello", 10));
    printf("%s\n", d);

    return 0;
}*/
/*
** ft_strlcat()
** Safely appends src to the end of dst without overflowing the buffer.
** The 'size' parameter is the total size of the dst buffer.
**
** If size <= length of dst, no characters are appended and the function
** returns size + length of src (this allows detecting truncation).
**
** Otherwise, src is appended to dst until there is no more space, leaving
** room for a null terminator. The result is always null-terminated when
** size > 0.
**
** The function returns the length of the string it tried to create:
** dst_len + src_len, regardless of whether truncation occurred.
*/
