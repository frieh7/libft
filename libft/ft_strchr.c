/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 12:45:30 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/10 11:13:25 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
/*Returns a pointer to the first occurrence of character c
in the string s, or NULL if c is not found. If c is '\0', returns a
pointer to the string's terminating null byte.*/
char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}
/*We used (char *)(s + i) because s is const char
and we want the returned type to be char*/
/*int	main(void)
{
    //%s: prints the returned pointer as a string
    //%p: prints the returned pointer's memory address (useful for NULL checks)
    printf("%s\n", ft_strchr("Hello", 'e'));
    printf("%s\n", ft_strchr("Hello", 'H'));
    printf("%s\n", ft_strchr("Hello", 'o'));
    printf("%s\n", ft_strchr("Hello", '\0'));
    printf("%p\n", ft_strchr("Hello", 'x'));

    return 0;
}*/
