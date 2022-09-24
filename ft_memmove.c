/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 11:51:49 by gmarques          #+#    #+#             */
/*   Updated: 2022/09/17 11:33:13 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr1;
	char	*ptr2;
	char	*temp;

	i = -1;
	ptr1 = dest;
	temp = ptr1;
	ptr2 = (char *)src;
	while (i++ < n)
		temp[i] = ptr2[i];
	ptr1 = temp;
	return (ptr1);
}

/* int main(void)
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
} */
