/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:46:06 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/10 10:14:56 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*int main(void)
{
    printf("%d\n", ft_isalpha('A'));
    printf("%d\n", ft_isalpha('a'));
    printf("%d\n", ft_isalpha('5'));
    printf("%d\n", ft_isalpha('@'));
    printf("%d\n", ft_isalpha(0));
    printf("%d\n", ft_isalpha(-1));

    return 0;
}*/
