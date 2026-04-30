/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 08:40:51 by lschawer          #+#    #+#             */
/*   Updated: 2026/04/30 13:51:50 by lschawer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long	numb;

	numb = nb;
	if (numb < 0)
	{
		ft_putchar_fd('-', fd);
		numb *= -1;
	}
	if (numb > 9)
		ft_putnbr_fd((numb / 10), fd);
	ft_putchar_fd(((numb % 10) + '0'), fd);
}
/*
int	main(void)
{
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(-42);
	write(1, "\n", 1);
}*/