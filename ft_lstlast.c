/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:53:47 by gmarques          #+#    #+#             */
/*   Updated: 2022/10/26 21:53:47 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if(lst -> next == NULL)
			return (lst);
		lst = lst -> next;
	}
	return (lst);
}

/* int main(void)
{
	t_list *teste;

	teste = malloc(sizeof(t_list));
	teste -> content = "abc";
	teste -> next = malloc(sizeof(t_list));
	teste -> next -> content = "def";
	teste -> next -> next = NULL;

	teste = ft_lstlast(teste);
	printf("%s\n", (char *)teste->content);
} */
