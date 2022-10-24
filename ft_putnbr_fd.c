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

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;
	int		i;

	i = -1;
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	str = ft_itoa(n);
	while (str[++i])
		write(fd, &str[i], 1);
}

/* int main(void)
{
	int fd = open("teste.txt", O_CREAT | O_WRONLY);
	int n = 5;

	ft_putnbr_fd(n, fd);

	if(fd == 3)
		printf("success!\n");

	close(fd);
} */
