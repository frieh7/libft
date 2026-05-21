/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 08:23:16 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/10 11:13:03 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
/*Returns a pointer to the last occurrence of character c
in the string s, or NULL if c is not found. If c is '\0', returns a
pointer to the string's terminating null byte.*/
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*We used (char *)(s + i) because s is const char 
and we want the returned type to be char*/
/*int	main(void)
{
    //%s: prints the returned pointer as a string
    //%p: prints the returned pointer's memory address (useful for NULL checks)
    printf("%s\n", ft_strrchr("Hello", 'l'));
    printf("%s\n", ft_strrchr("Hello", 'H'));
    printf("%s\n", ft_strrchr("Hello", '\0'));
    printf("%p\n", ft_strrchr("Hello", 'x'));

    return 0;
}*/
