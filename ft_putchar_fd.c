/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:14:12 by gmarques          #+#    #+#             */
/*   Updated: 2022/09/17 10:14:12 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int main(void)
{
	int fd = open("teste.txt", O_CREAT | O_WRONLY);
	char c = 'a';

	ft_putchar_fd(c, fd);
	if(fd == 3)
		printf("success!\n");

	close(fd);
} */
