/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:05:45 by gmarques          #+#    #+#             */
/*   Updated: 2022/08/10 22:05:45 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

 char *ft_strnstr(const char *haystack, const char *needle, size_t n);

 char *ft_strnstr(const char *haystack, const char *needle, size_t n)
 {
	size_t i;
	size_t j;
	char *ptr;

	i = 0;
	if(!needle)
		return((char *)haystack);
	while((haystack[i] && needle[i]) && i < n)
	{
		if(haystack[i] == needle[i])
		{

			ptr = (char *)&haystack[i];
			return (ptr);
		}
		i++;
	}
	return (NULL);
 }

int main(void)
{
	size_t n;

	n = 5;
	char haystack[] = "teste";
	char needle[] = "aaate";
	printf("%s\n", haystack);
	printf("%s\n", ft_strnstr(haystack, needle, n));
}
