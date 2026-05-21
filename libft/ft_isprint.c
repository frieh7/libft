/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 12:13:46 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/10 10:17:24 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*int	main(void)
{
    printf("%d\n", ft_isprint('A'));
    printf("%d\n", ft_isprint(' '));
    printf("%d\n", ft_isprint('~'));
    printf("%d\n", ft_isprint(31));
    printf("%d\n", ft_isprint(127));

    return 0;
}*/
