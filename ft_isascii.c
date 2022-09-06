/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:58:20 by gmarques          #+#    #+#             */
/*   Updated: 2022/09/06 22:58:20 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int a)
{
	if (a < 0 || a > 127)
		return (0);
	return (1);
}

/* int main (void)
{
	unsigned char a = 'a';
	printf("%d\n", ft_isascii(a));
	printf("%d\n", isascii(a));
}
 */
