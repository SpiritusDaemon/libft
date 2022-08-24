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

#include "libft.h"

int ft_tolower(int c)
{
	if(c >= 'A' && c <= 'Z')
		c += 32;
	return(c);
}


/* int main(void)
{
	char str = 'A';
	printf("%c\n", ft_tolower((int)str));
	return (0);
}
 */
