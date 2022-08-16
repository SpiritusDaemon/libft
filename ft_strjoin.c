/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 00:43:10 by gmarques          #+#    #+#             */
/*   Updated: 2022/08/15 00:43:10 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}

char *ft_strjoin(char const *s1, char const *s2);

char *ft_strjoin(char const *s1, char const *s2)
{
	char *ptr;
	int i;
	int j;
	int size;

	size = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	i = 0;
	j = 0;
	ptr = malloc(size + 1 * sizeof(char));
	if(!s1 || !s2)
		return (NULL);
	while(s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while(s2[j])
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	/* ft_strlcpy(ptr, s1, size);
	ft_strlcat(ptr, s2, size); */
	ptr[i] = '\0';
		return(ptr);
}

int main(void)
{
	char s1[] = "testa";
	char s2[] = "misso";

	printf("%s\n", ft_strjoin(s1, s2));
}
