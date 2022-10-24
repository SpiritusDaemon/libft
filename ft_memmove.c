/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 11:51:49 by gmarques          #+#    #+#             */
/*   Updated: 2022/10/01 16:32:07 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*temp;
	char	*ptr;

	i = -1;
	temp = (char *)dest;
	ptr = (char *)src;
	if (temp > ptr)
		while (n-- > 0)
			temp[n] = ptr[n];
	else
		while (++i < n)
			temp[i] = ptr[i];
	return (dest);
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
