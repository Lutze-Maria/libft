/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:22:54 by lschawer          #+#    #+#             */
/*   Updated: 2026/04/27 14:24:18 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <fcntl.h>
#include <unistd.h>

int	main(void)
{
    int fd;

    // O_WRONLY: Open for writing only
    // O_CREAT: Create the file if it doesn't exist
    // 0644: Standard file permissions (Owner can read/write, others read)
    fd = open("test_output.txt", O_WRONLY | O_CREAT, 0644);

    if (fd == -1)    // Open returns -1 if something went wrong
        return (1);

	ft_putchar_fd('H', fd);
	ft_putchar_fd('i', fd);

	close(fd);
	return (0);
}*/