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

#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *str, int c);

char *ft_strrchr(const char *str, int c)
{
	int i;
	char *ptr;

	ptr = NULL;
	i = -1;
	while(str[i++])
		if(str[i] == c)
			ptr = (char *)&str[i];
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