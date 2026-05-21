/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:41:19 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/10 17:00:56 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
/*Copies n bytes from src to dst. The memory areas must not overlap.
Returns the original dst pointer.*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	i = 0;
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*int	main(void)
{
    char a[10] = "abcdef";
    char b[10];

    ft_memcpy(b, a, 6);
    printf("%s\n", b);

    ft_memcpy(a, "XXXXXX", 4);
    printf("%s\n", a);

    return 0;
}*/
