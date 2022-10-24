/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 12:19:04 by gmarques          #+#    #+#             */
/*   Updated: 2022/08/07 12:19:04 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*str)
	{
		if (*str == c)
			ptr = (char *)str;
		str++;
	}
	if (*str == c)
		ptr = (char *)str;
	return (ptr);
}

/* int main(void)
{
	const char str[] = "Bairromemozéfodidoirmazodalhe42brutzozmm";
	const char test = 'z';

	printf("%c\n", test);
	printf("%s\n", ft_strrchr(str, ((int)test)));
	return (0);
} */
