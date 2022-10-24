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

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	i = -1;
	while (++i < n)
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
	return (0);
}

/* int main(void)
{
	char str1[] = "testaaaaaaaaaaaaaaaaaaaaa";
	char str2[] = "testaaaaaaaaaaaaaaaaaaaaa";
	size_t n = 5;
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%d\n",ft_memcmp(str1, str2, n));
	printf("%d\n",memcmp(str1, str2, n));
} */
