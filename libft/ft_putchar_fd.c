/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselfrie <aselfrie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:02:01 by aselfrie          #+#    #+#             */
/*   Updated: 2025/12/30 10:15:35 by aselfrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*int     main(void)
{
        // Test 1: Write to stdout (screen)
        ft_putchar_fd('A', 1);
        ft_putchar_fd('\n', 1);

        // Test 2: Write to stderr (error output)
        ft_putchar_fd('E', 2);
        ft_putchar_fd('R', 2);
        ft_putchar_fd('R', 2);
        ft_putchar_fd('\n', 2);
}*/
