/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 21:48:18 by gmarques          #+#    #+#             */
/*   Updated: 2022/08/06 21:48:18 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n);

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while(i < n && s1[i] == s2[i])
		i++;
	return(s1[i] - s2[i]);
}

int main(void)
{
	size_t n;
	char s1[] = "testa";
	char s2[] = "testa";
	n = 5;

	printf("%d\n", strncmp(s1, s2, n));
	printf("%d\n", ft_strncmp(s1, s2, n));
}
