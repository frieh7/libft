/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 09:46:48 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/15 10:29:17 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	is_neg;
	int	res;

	i = 0;
	is_neg = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_neg = -1;
		i++;
	}
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - '0');
	return (res * is_neg);
}
/*#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_atoi("42"));
    printf("%d\n", ft_atoi("   -42"));
    printf("%d\n", ft_atoi("   +42"));
    printf("%d\n", ft_atoi("0042"));
    printf("%d\n", ft_atoi("4193abc"));
    printf("%d\n", ft_atoi("abc4193"));
    printf("%d\n", ft_atoi("-2147483648"));
    printf("%d\n", ft_atoi("2147483647"));
    printf("%d\n", ft_atoi("0"));
    return 0;
}*/
/*
** Converts a string to an integer.
** - Skips leading whitespace.
** - Detects + or - sign.
** - Converts consecutive digits into an integer.
** - Stops when a non-digit character is reached.
** Returns the integer value with the correct sign.
*/
