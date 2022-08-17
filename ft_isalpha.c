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

#include "libft.h"

int ft_isalpha(int c)
{
    if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (c);
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
