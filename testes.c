/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 21:08:20 by gmarques          #+#    #+#             */
/*   Updated: 2022/08/17 21:08:20 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* COPY FUNC TESTS DOWN BELOW */ /* testing ft_itoa.c */

int main(void)
{
	int i = 2147483648;
	/* while(i --!= -200) */
		printf("%s\n", ft_itoa(i));
}
