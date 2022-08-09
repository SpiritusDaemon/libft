/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 11:51:49 by gmarques          #+#    #+#             */
/*   Updated: 2022/08/09 20:46:08 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n);

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	char *ptr1;
	char *ptr2;
	char *temp;

	i = 0;
	ptr1 = dest;
	ptr2 = (char*)src;
	temp = ptr1;
	while(i < n)
	{
		temp[i] = ptr2[i];
		i++;
	}
	ptr1 = temp;
	return (ptr1);
}

int main(void)
{
	int i = 32;
	char dest[] = "teste123";
	const char src[] = "This is memcpy library function";
	printf("%s\n", dest);
	printf("%s\n", src);
	ft_memmove(dest, src, i);
	printf("%s\n", dest);
	printf("%s\n", src);

	return (0);
}
