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

#include <stdio.h>
#include <string.h>

size_t ft_strlcat( char *dst, const char *src, size_t size);

size_t ft_strlcat( char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while(src[i])
	{
		dst[size] = src[i];
		i++;
		size++;
	}
	dst[size] = '\0';
	return(size);
}

int main(void)
{
	char dst[] = "testa";
	char src[] = "mis";
	size_t size;

	size = 5;
	printf("%s\n", dst);
	ft_strlcat(dst, src, size);
	printf("%s\n", dst);
}

