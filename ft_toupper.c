/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 23:33:51 by gmarques          #+#    #+#             */
/*   Updated: 2022/07/29 23:33:51 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
	 if(c >= 'a' && c <= 'z')
		c -= 32;
	return(c);

}

/* int main(void)
{
	char str = 'b';
	printf("%c\n", ft_toupper((int)str));
	return (0);
} */
