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

static int char_exist(char *s, char c)
{
	int i;

	i = 0;
	while(s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int limit(char *s, char c)
{
	int i;
	i = 0;
	while (s[i] != c)
		i++;
	return (i);
}

static char *first_part(char *s, char *string_1, char c)
{
	int i;

	i = 0;
	while(s[i] != c)
	{
		string_1[i] = s[i];
		i++;
	}
		string_1[i] = '\0';
	return(string_1);
}

static char *second_part(char *s, int i, char *string_2)
{
	int j;
	j = 0;
	i += 1;
	while(s[i])
	{
		string_2[j] = s[i];
		i++;
		j++;
	}
	string_2[j] = '\0';
	return(string_2);
}

char **ft_split(char const *s, char c)
{
	int j;
	int i;
	j = char_exist((char *)s, c);
	if(j != 1 || !s)
		return(NULL);
	i = limit((char *)s, c);
	char *string_1 = malloc(i + 1);
	char *string_2 = malloc(ft_strlen((char *)s) - i);
	string_1 = first_part((char *)s, string_1, c);
	string_2 = second_part((char *)s, i, string_2);
	char **final = malloc((ft_strlen(string_1) + ft_strlen(string_2)) * sizeof(char));
	final[0] = string_1;
	final[1] = string_2;
	return(final);
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
