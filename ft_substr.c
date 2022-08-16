/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 00:19:39 by gmarques          #+#    #+#             */
/*   Updated: 2022/08/15 00:19:39 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len);

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ptr;
	size_t i;

	if(!s)
		return (NULL);
	i = 0;
	ptr = malloc(len + 1 * sizeof(char));
	while(i < len && s[start])
	{
		ptr[i] = s[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/* int main(void)
{
	size_t len;
	unsigned int start;
	char s[] = "teste";

	start = 2;
	len = 5;

	printf("%s\n", (ft_substr(s, start, len)));

} */
