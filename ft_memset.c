/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 10:49:41 by gmarques          #+#    #+#             */
/*   Updated: 2022/08/06 10:49:41 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
	size_t i;
	char *ptr;

	i = -1;
	ptr = str;
	while(i++ < n)
		ptr[i] = c;
	return (ptr);
}

/* int main (void)
{
	char str[] = "This is memset library function";
	printf("%s\n", str);
	ft_memset(str,'$', 7);
	printf("%s\n", str);
	 memset(str,'$',7);
	printf("%s\n", str);
	return(0);
}  */
