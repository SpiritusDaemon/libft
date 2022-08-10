/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 21:29:31 by gmarques          #+#    #+#             */
/*   Updated: 2022/08/09 21:29:31 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *str1, const void *str2, size_t n);

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int temp;
	size_t i;
	unsigned char *ptr1;
	unsigned char *ptr2;

	ptr1 = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	i = 0;
	temp = 0;
	if(n == 0)
		return (0);
	while ((ptr1[i] == ptr2[i]) && i < n)
		i++;
	temp = ptr1[i] - ptr2[i];
	if (temp < 0)
		return(!!temp * -1);
	return (!!temp);
}

int main(void)
{
	char str1[] = "teste";
	char str2[] = "teste";
	size_t n = 5;
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%d\n",ft_memcmp(str1, str2, n));
	printf("%d\n",memcmp(str1, str2, n));
}
