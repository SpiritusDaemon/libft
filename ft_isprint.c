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

#include "libft.h"

int ft_isprint(int c)
{
    if(c >= 1 && c <= 127)
        return (c);
     return (0);
}

/* int main(void)
{
	char c = 's';
	printf("%d\n", ft_isprint((int)c));
	return (0);
} */
