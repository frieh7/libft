/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 12:24:28 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/10 16:39:02 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
/*Fills the first len bytes of the memory area s with the byte value c.
Returns the original pointer s.*/
void	*ft_memset(void *s, int c, size_t len)
{
	size_t			i;
	unsigned char	*p;

	if (!s)
		return (NULL);
	i = 0;
	p = (unsigned char *)s;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*int	main(void)
{
    char a[10] = "abcdef";
    char b[10] = "abcdef";

    ft_memset(a, 'X', 3);
    printf("%s\n", a);

    ft_memset(b, 0, 4);
    printf("%s\n", b);

    return 0;
}*/
