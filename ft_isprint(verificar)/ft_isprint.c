/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 23:17:33 by gmarques          #+#    #+#             */
/*   Updated: 2022/07/29 23:17:33 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_isprint(int charint);

int ft_isprint(int charint)
{
   unsigned char alpha;

    alpha = charint;
    if(alpha >= 1 && alpha <= 127)
        return (charint);
     return (0);
}

/* int main(void)
{
	char str = 's';
	printf("%d\n", ft_isprint((int)str));
	return (0);
} */
