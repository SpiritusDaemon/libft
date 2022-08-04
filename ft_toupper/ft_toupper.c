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

#include <stdio.h>
int ft_toupper(int alpha);

int ft_toupper(int alpha)
{
	 if(alpha >= 'a' && alpha <= 'z')
		alpha -= 32;
	return((char)alpha);

}

int main(void)
{
	char str = 'b';
	printf("%c\n", ft_toupper((int)str));
	return (0);
}
