/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 23:27:42 by gmarques          #+#    #+#             */
/*   Updated: 2022/07/29 23:27:42 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
    if(c >= 48 && c <= 57)
        return (c);
     return (0);
}

/* int main(void)
{
    char teste;

    teste = '1';
    printf("%d\n", ft_isdigit((int)teste));
    return(0);
} */
