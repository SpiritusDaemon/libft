/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 21:31:35 by gmarques          #+#    #+#             */
/*   Updated: 2022/09/06 21:31:35 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr1;
	char	*ptr2;

	if (!dest)
		return (0);
	i = -1;
	ptr1 = dest;
	ptr2 = (char *)src;
	while (++i < n)
		ptr1[i] = ptr2[i];
	return (ptr1);
}
/* int main(void)
{
	int i = 32;
	char dest[] = "teste123";
	const char src[] = "This is memcpy library function";
	printf("%s\n", dest);
	printf("%s\n", src);
	ft_memcpy(dest, src, i);
	printf("%s\n", dest);
	printf("%s\n", src);

	return (0);
} */
