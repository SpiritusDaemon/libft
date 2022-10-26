/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 19:44:37 by gmarques          #+#    #+#             */
/*   Updated: 2022/08/21 19:44:37 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Function name ft_split
Prototype char **ft_split(char const *s, char c);

Parameters

s: The string to be split. c: The delimiter character

Return value

The array of new strings resulting from the split.
NULL if the allocation fails.

External functs. malloc, free

Description

Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer. */

static int	word_counter(const char *s, char c)
{
	size_t	counter;

	counter = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0' || *s == c)
				counter++;
		while (*s != c && *s != '\0')
			s++;
	}
	return (counter);
}

static char	**create_split(char *s, char c, char **split, size_t str_len)
{
	size_t	i;
	size_t	size;
	size_t	count_len;

	i = 0;
	size = 0;
	count_len = 0;
	while (i <= str_len)
	{
		if (s[i] == c || !s[i])
		{
			if (count_len > 0)
			{
				split[size] = malloc((count_len + 1) * sizeof(char));
				if (split[size] != NULL)
					ft_strlcpy(split[size], &s[i - count_len], count_len + 1);
				count_len = 0;
				size++;
			}
		}
		else
			count_len++;
		i++;
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	int		size;
	char	**split;
	size_t	str_len;

	size = word_counter (s, c);
	split = malloc((size + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	str_len = ft_strlen((char *)s);
	split = create_split((char *)s, c, split, str_len);
	split[size] = NULL;
	return (split);
}

/* int main(void)
{
	char s[] = "grandesctestes";
	char c = 'c';
	char **func = ft_split(s, c);

	printf("%s\n", func[0]);
	printf("%s\n", func[1]);

	return (0);
} */
ed
