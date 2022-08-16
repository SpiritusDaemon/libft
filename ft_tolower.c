/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 22:11:26 by gmarques          #+#    #+#             */
/*   Updated: 2022/08/15 22:11:26 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_tolower(int alpha);

int ft_tolower(int alpha)
{
	if(alpha >= 'A' && alpha <= 'Z')
		return(alpha + 32);
	return((char)alpha);
}


/* int main(void)
{
	char str = 'Z';
	printf("%c\n", ft_tolower((int)str));
	return (0);
}
 */
