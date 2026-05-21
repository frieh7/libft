/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:03:00 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/30 10:17:29 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/*int     main(void)
{
        // Test 1: Write string to screen
        ft_putstr_fd("Hello World\n", 1);

        // Test 2: Write to stderr (error output)
        ft_putstr_fd("Error message\n", 2);
}*/
