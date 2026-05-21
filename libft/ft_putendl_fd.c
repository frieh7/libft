/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:03:33 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/30 10:25:43 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*int     main(void)
{
        // Test 1: Normal strings (each on new line automatically)
        ft_putendl_fd("Hello World", 1);
        ft_putendl_fd("Line 2", 1);
        ft_putendl_fd("Line 3", 1);
}*/
