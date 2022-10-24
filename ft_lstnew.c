/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:43:36 by gmarques          #+#    #+#             */
/*   Updated: 2022/10/20 19:43:36 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *teste;

	teste = malloc(sizeof(t_list));
	if(!teste)
		return (NULL);
	teste -> content = content;
	teste -> next = NULL;
		return (teste);
}

/* int main(void)
{

	char str[] = "teste123teste";

	t_list *teste;
	teste = ft_lstnew((void *)str);
	printf("\n%s\n", (char *)teste->content);
} */
