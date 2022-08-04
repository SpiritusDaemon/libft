/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 22:49:08 by gmarques          #+#    #+#             */
/*   Updated: 2022/07/29 22:49:08 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_isalnum(int charint);

int ft_isalnum(int charint)
{
    char alpha;

    alpha = charint;
    if((alpha >= 65 && alpha <= 90) || (alpha >= 97 && alpha <= 122) || (alpha >= 48 && alpha <= 57))
        return (charint);
    return (0);
}

/* int main(void)
{
    char teste;

    teste = '9';
    printf("%d\n", ft_isalnum((int)teste));
    return(0);
} */
