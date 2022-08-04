/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 16:32:24 by gmarques          #+#    #+#             */
/*   Updated: 2022/07/31 16:32:24 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char *ft_strchr(const char *str, int c);

char *ft_strchr(const char *str, int c)

{
	unsigned char alpha;

	alpha = c;
	while(str)
	{
		if(*str == alpha)
			return((char*)str);
		str++;
	}
	return (NULL);
}


int main(void)
{
	const char str[] = "Bairromemozéfodidoirmaodalhe42brutomm";
	const char test = 'z';

	printf("%c\n", test);
	printf("%s\n", ft_strchr(str, ((int)test)));
	return (0);
}


