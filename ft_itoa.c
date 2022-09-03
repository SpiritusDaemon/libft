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

static char *max_int (int count)
{
	char *t_itoa;
	t_itoa = malloc(count + 1 * sizeof(char));
	t_itoa = "-2147483648";
	return (t_itoa);
}

static char *negative_int (int count, int n)
{
 	char *t_itoa = malloc(count + 2 * sizeof(char));

	n *= -1;
	count += 1;
	t_itoa[count] = '\0';
	while (count > 0)
	{
		t_itoa[--count] = n % 10 + '0';
		n /= 10;
	}
	t_itoa[0] = '-';
	return (t_itoa);
}

static char *positive_int(int count, int n)
{
	char *t_itoa = malloc(count + 1 * sizeof(char));
	t_itoa[count] = '\0';
	while (count > 0)
	{
		t_itoa[--count] = n % 10 + '0';
		n /= 10;
	}
	return (t_itoa);
}

static char *null_int(int count)
{


	char *t_itoa = malloc(1 * sizeof(char));
	t_itoa[0] = '0';
	return(t_itoa);
}

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
	char *t_itoa;

	count = count_size(n);
	if(count == 0 && n == 0)
		t_itoa = null_int(count);
	if(n > 0)
		t_itoa = positive_int(count, n);
	if(n < 0 && n != -2147483648)
		t_itoa = negative_int(count, n);
	if(n == -2147483648)
		t_itoa = max_int(count);
	return(t_itoa);
}

/* int main(void)
{
	int i = 50142;
	printf("%s\n", ft_itoa(i));
} */
