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

char *ft_strtrim(char const *s1, char const *set)
{
	char *temp;
	int i;
	int j;
	int e;

	i = 0;
	j = 0;
	e = 0;
	if(!(temp = malloc(ft_strlen((char *)s1 + 1))))
		return (NULL);
	while (s1[e])
	{
		while (set[j])
		{
			if(s1[e] == set[j])
				e++;
			if(s1[e] != set[j])
				j++;
		}
		temp[i++] = s1[e++];
		j = 0;
	}
	temp[i] = '\0';
	return(temp);
}
