/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 11:59:27 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/30 10:11:28 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
** ft_striteri - Applies a function to each 
** character of a string (with modification)
**
** Parameters:
**   s: The string on which to iterate
**   f: The function to apply to each character (receives index and char pointer)
**
** Return Value:
**   None
**
** Description:
**   Applies the function 'f' on each 
**   character of the string passed as argument,
**   passing its index as first argument. 
**   Each character is passed by address to 'f'
**   to be modified if necessary. This function modifies the original string.
*/
/*#include <stdio.h>
void    to_upper(unsigned int i, char *c)
{
        (void)i;
        if (*c >= 'a' && *c <= 'z')
                *c = *c - 32;
}

// Function 2: Convert to lowercase
void    to_lower(unsigned int i, char *c)
{
        (void)i;
        if (*c >= 'A' && *c <= 'Z')
                *c = *c + 32;
}

int     main(void)
{
        char str1[] = "hello world";
        char str2[] = "HELLO WORLD";

        printf("Test 1 - To uppercase:\n");
        printf("Before: %s\n", str1);
        ft_striteri(str1, &to_upper);
        printf("After:  %s\n\n", str1);

        printf("Test 2 - To lowercase:\n");
        printf("Before: %s\n", str2);
        ft_striteri(str2, &to_lower);
        printf("After:  %s\n\n", str2);

        // Test 3: NULL protection
        ft_striteri(NULL, &to_upper);
        printf("Test 3 - NULL test: PASS (no crash)\n");

        return (0);
}*/
