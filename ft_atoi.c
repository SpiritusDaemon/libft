/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:03:52 by gmarques          #+#    #+#             */
/*   Updated: 2022/08/13 11:03:52 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_atoi(const char *str);

int ft_atoi(const char *str)
{
	int res;
	int sign;
	int i;

	res = 0;
	sign = !0;
	i = 0;
	 while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
	 || str[i] == '\r' || str[i] == '\v')
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return(res * sign);
}

/* int main(void)
{
	int val;
	int val1;
	char str[] =  " \n \t \r \v -1234567asd";
	val = atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);
	val1 = ft_atoi(str);
	printf("String value = %s, Int value(meuatoi) = %d\n", str, val1);
}
 */

