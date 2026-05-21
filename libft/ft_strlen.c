/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 12:17:35 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/10 10:20:40 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
/*int	main(void)
{
    printf("%zu\n", ft_strlen("Hello"));
    printf("%zu\n", ft_strlen(""));
    printf("%zu\n", ft_strlen("A"));
    printf("%zu\n", ft_strlen("12345"));
    printf("%zu\n", ft_strlen("Hi there"));

    return 0;
}*/
