/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:53:57 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/10 16:41:42 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*int	 main(void)
{
    printf("%d\n", ft_isalnum('5'));
    printf("%d\n", ft_isalnum('A'));
    printf("%d\n", ft_isalnum('a'));
    printf("%d\n", ft_isalnum('@'));
    printf("%d\n", ft_isalnum(' '));
    printf("%d\n", ft_isalnum(-1));

    return 0;
}*/
