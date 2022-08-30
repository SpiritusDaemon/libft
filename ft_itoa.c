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
	int i;

	i = 0;
	count = count_size(n);
	char *t_itoa = malloc(count + 1 * sizeof(char));
	while (count > 0)
	{
		n /= 10;
		t_itoa[i] = n % 10 - '0';
		i++;
		count--;
	}
	t_itoa[i] = '\0';
	return(t_itoa);
}

