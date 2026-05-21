/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:46:32 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/10 10:15:34 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*int 	main(void)
{
    printf("%d\n", ft_isdigit('5'));
    printf("%d\n", ft_isdigit('A'));
    printf("%d\n", ft_isdigit('@'));
    printf("%d\n", ft_isdigit(' '));
    printf("%d\n", ft_isdigit(0));
    printf("%d\n", ft_isdigit(-1));

    return 0;
}*/
