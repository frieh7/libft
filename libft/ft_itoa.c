/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 10:18:30 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/30 09:22:29 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_nbrlen(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*mount_str(char *str, long l, int i)
{
	if (l == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (l < 0)
	{
		str[0] = '-';
		l *= -1;
	}
	while (l > 0)
	{
		str[i--] = l % 10 + '0';
		l /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long		l;

	l = n;
	i = ft_nbrlen(l);
	str = (char *)malloc(i + 1);
	if ((!str))
		return (NULL);
	str[i--] = '\0';
	return (mount_str(str, l, i));
}
/*#include <stdio.h>
int	main(void)
{
	char	*str;

	str = ft_itoa(0);
	printf("0 -> %s\n", str);
	free(str);

	str = ft_itoa(42);
	printf("42 -> %s\n", str);
	free(str);

	str = ft_itoa(-42);
	printf("-42 -> %s\n", str);
	free(str);

	str = ft_itoa(-2147483648);
	printf("INT_MIN -> %s\n", str);
	free(str);

	return (0);
}*/
/* Converts an integer to a null-terminated string representation. */
