/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 12:08:55 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/10 10:13:35 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*int	main(void)
{
    printf("%d\n", ft_isascii(0));
    printf("%d\n", ft_isascii(127));
    printf("%d\n", ft_isascii(128));
    printf("%d\n", ft_isascii(-1));
    printf("%d\n", ft_isascii('A'));

    return 0;
}*/
