/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 12:27:42 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/10 10:23:42 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*int	main(void)
{
    printf("%d\n", ft_toupper('a'));
    printf("%d\n", ft_toupper('z'));
    printf("%d\n", ft_toupper('A'));
    printf("%d\n", ft_toupper('5'));
    printf("%d\n", ft_toupper('@'));

    return 0;
}*/
