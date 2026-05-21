/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 12:42:04 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/10 10:25:58 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*int	main(void)
{
    printf("%d\n", ft_tolower('A'));
    printf("%d\n", ft_tolower('Z'));
    printf("%d\n", ft_tolower('a'));
    printf("%d\n", ft_tolower('5'));
    printf("%d\n", ft_tolower('@'));

    return 0;
}*/
