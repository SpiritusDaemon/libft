/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:37:33 by gmarques          #+#    #+#             */
/*   Updated: 2022/09/17 10:37:33 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = -1;
	while (s[++i])
		write(fd, &s[i], 1);
	write(fd, "\n", 1);
}

/* int main(void)
{
	int fd = open("teste.txt", O_CREAT | O_WRONLY);
	char *c = "grandestestes";

	ft_putendl_fd(c, fd);
	if(fd == 3)
		printf("success!\n");

	close(fd);
}
 */
