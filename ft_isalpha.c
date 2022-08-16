/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 23:28:04 by gmarques          #+#    #+#             */
/*   Updated: 2022/07/29 23:28:04 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_isalpha(int charint);

int ft_isalpha(int charint)
{
    char alpha;

    alpha = charint;
    if((alpha >= 65 && alpha <= 90) || (alpha >= 97 && alpha <= 122))
        return (charint);
    return (0);
}

/*  int main(void)
{
    char teste;

    teste = 'a';
    printf("%d\n", ft_isalpha((int)teste));
    return(0);
}
 */
