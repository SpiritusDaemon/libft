/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:14:31 by gmarques          #+#    #+#             */
/*   Updated: 2022/08/26 14:14:31 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_size(int n)
{
	int i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return(i);
}

char *ft_itoa(int n)
{
	int count;

	count = count_size(n);
	char *t_itoa = malloc(count + 1 * sizeof(char));
	t_itoa[count] = '\0';
	while (count > 0)
	{
		t_itoa[--count] = n % 10 + '0';
		n /= 10;
	}
	return(t_itoa);
}

/* int main(void)
{
	int i = 50142;
	printf("%s\n", ft_itoa(i));
} */
