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

/* COPY FUNC TESTS DOWN BELOW */ /* testing ft_strtrim.c */

int main(void)
{
	char s1[] = "abcdefabc";
	char set[] = "abc";
	printf("%s\n", ft_strtrim(s1, set));
}

