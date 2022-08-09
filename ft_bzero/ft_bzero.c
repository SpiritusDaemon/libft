/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 10:53:07 by gmarques          #+#    #+#             */
/*   Updated: 2022/08/06 10:53:07 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n);

void ft_bzero(void *s, size_t n)
{
	size_t i;
	char *ptr;

	i = 0;
	ptr = s;
	while(i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

int main(void)
{
	int i = 7;
	char arr[] = "This is bzero library function";
	printf("%s\n", arr);
	ft_bzero(arr, i);
	printf("%s\n", arr);


}
