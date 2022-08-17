/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 23:04:36 by gmarques          #+#    #+#             */
/*   Updated: 2022/07/29 23:04:36 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

/* int main(void)
{
	char str[] = "teste";
	printf("%d\n", ft_strlen(str));
	return (0);
}
 */
