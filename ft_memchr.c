/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:03:14 by gmarques          #+#    #+#             */
/*   Updated: 2022/08/16 21:03:14 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	char *str;
	char *temp;

	i = 0;
	str = (char*)s;
	while(i < n)
	{
		if(str[i] == c)
		{
			temp = &str[i];
			return (temp);
		}
		i++;
	}
	return (NULL);
}

/* int main(void)
{
	char c;
	char str[] = "testeucorretoalgo";
	size_t n;
	char *test;

	n = 7;
	c = 'u';
	printf("%s\n",str);
	test = memchr(str, c, n);
	printf("%s\n", test);
	printf("%s\n",str);
	test = ft_memchr(str, c, n);
	printf("%s\n", test);
}
 */
