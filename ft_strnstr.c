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

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = 0;
	if (!needle)
		return ((char *)haystack);
	while ((haystack[i] && needle[j]) && i < n)
	{
		while (haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
		{
			ptr = (char *)&haystack[i];
			return (ptr);
		}
		j = 0;
		i++;
	}
	return (NULL);
}

/* int main(void)
{
	size_t n;

	n = 33;
	char haystack[] = "frasemesmogustitestetomalaandaca";
	char needle[] = "gust";
	printf("%s\n", haystack);
	printf("%s\n", ft_strnstr(haystack, needle, n));
} */
