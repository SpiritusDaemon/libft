/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:17:15 by gmarques          #+#    #+#             */
/*   Updated: 2022/08/07 17:17:15 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat( char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;
	size_t	ret_num;

	src_len = ft_strlen((char *)src);
	dst_len = ft_strlen(dst);
	ret_num = 0;
	i = -1;
	if (size < dst_len)
		return (src_len + size);
	ret_num = dst_len + src_len;
	while ((dst_len + 1) < size && src[++i])
	{
		dst[dst_len] = src[i];
		dst_len++;
	}
	dst[dst_len] = '\0';
	return (ret_num);
}

/* int main(void)
{
	char dst[] = "testa";
	char src[] = "mis";
	size_t size;

	size = 5;
	printf("%s\n", dst);
	ft_strlcat(dst, src, size);
	printf("%s\n", dst);
	printf("%d\n", ft_strlcat(dst, src, size));
}
 */
