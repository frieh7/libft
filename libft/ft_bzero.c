/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:30:20 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/10 16:30:02 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*int	main(void)
{
    char a[10] = "abcdef";
    char b[10] = "abcdef";

    ft_bzero(a, 3);
    for(int i = 0; i < 10; i++)
    	printf("%c", a[i]);
    printf("\n");
    ft_bzero(b, 0);
    printf("%s\n", b);
    return 0;
}*/
