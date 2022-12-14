/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:02:53 by gmarques          #+#    #+#             */
/*   Updated: 2022/08/16 21:02:53 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	i = ft_strlen((char *)src);
	return (i);
}

/* int main(void)
{
	char src[] = "misso";
	char dest[] = "testa";
	unsigned int size;

	size = ft_strlen(dest);
	ft_strlcpy(dest, src, size);
	printf("%s\n", dest);
	printf("%s\n", src);
	printf("%i\n", ft_strlcpy(dest, src, size - 1));
	return (0);
} */
