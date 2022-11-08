/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 10:17:34 by gmarques          #+#    #+#             */
/*   Updated: 2022/10/29 14:39:55 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Takes as a parameter a node and frees the memory of
the node’s content using the function ’del’ given
as a parameter and free the node. The memory of
’next’ must not be freed. */

/* static void del(void *delete)
{
	free(delete);
} */

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*teste;

	if (!lst || !del)
		return ;
	teste = lst -> content;
	del(teste);
	teste = lst -> next;
}

/* int main(void)
{
	t_list *teste;
	teste = malloc(sizeof(t_list));
	teste -> content = "abc";
	teste -> next = malloc(sizeof(t_list));
	teste -> next -> content = "def";
	teste -> next -> next = NULL;
	ft_lstdelone(teste, del);
	printf("%s\n", (char *)teste->content);
	printf("%s\n", (char *)teste->next->content);
} */
