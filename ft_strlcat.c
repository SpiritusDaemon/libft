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

size_t ft_strlcat( char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	j = ft_strlen(dst);
	i = 0;
	while(src[i] && j <= size)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[size] = '\0';
	return(size);
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
}
 */
