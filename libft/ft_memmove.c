/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:53:56 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/10 17:53:24 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
/*Copies len bytes from src to dst, safely handling overlapping memory.
Copies backward if dst > src, otherwise copies forward. Returns dst.*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d > s)
	{
		i = len;
		while (i-- > 0)
			d[i] = s[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
/*int	main(void)
{
    char a[20] = "HelloWorld";

    ft_memmove(a + 3, a, 5);
    printf("%s\n", a);

    ft_memmove(a, a + 1, 5);
    printf("%s\n", a);

    return 0;
}*/
