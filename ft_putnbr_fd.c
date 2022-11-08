/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:47:20 by gmarques          #+#    #+#             */
/*   Updated: 2022/09/17 10:47:20 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd2(int n, int fd)
{
	if (n > 9 || n < -9)
		ft_putnbr_fd2(n / 10, fd);
	n %= 10;
	n = ((n >= 0) - (n < 0)) * n;
	write(fd, &"0123456789"[n], 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		write(fd, "-", 1);
	ft_putnbr_fd2(n, fd);
}

/* int main(void)
{
	int n = 5;
	printf("n: %i\n", n);
	ft_putnbr_fd(-2147483648, 1);
} */
