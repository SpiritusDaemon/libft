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

/* COPY FUNC TESTS DOWN BELOW */ /* testing ft_split.c */

int main(void)
{
	char s[] = "grandesctestes";
	char c = 'c';
	char **func = ft_split(s, c);

	printf("%s\n", func[0]);
	printf("%s\n", func[1]);

	return (0);
}
