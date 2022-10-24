/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:29:20 by gmarques          #+#    #+#             */
/*   Updated: 2022/08/18 19:29:20 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	char 		*str;

	str = NULL;
	if (s1 != NULL && set != NULL)
	{
		start = 0;
		end = ft_strlen((char *)s1);

		while (s1[start] && ft_strchr(set, s1[start]) != NULL)
			start++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) != NULL)
			end--;
		str = malloc((end - start) + 1);
		ft_strlcpy(str, &s1[start], end - start + 1);
	}
	return (str);
}

/* int main(void)
{
	char s1[] = "abcdefabc";
	char set[] = "abc";
	printf("%s\n", ft_strtrim(s1, set));
} */
