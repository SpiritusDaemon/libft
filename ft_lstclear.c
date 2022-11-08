/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 10:55:50 by gmarques          #+#    #+#             */
/*   Updated: 2022/10/29 14:41:52 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Deletes and frees the given node and every
successor of that node, using the function ’del’
and free(3).
Finally, the pointer to the list must be set to
NULL. */

/* static void del (void *delete)
{
	free (delete);
	printf("free\n");
} */

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	temp = *lst;
	while (temp)
	{
		del(temp->content);
		temp = temp->next;
	}
	free (temp);
	temp = NULL;
	*lst = temp;
}

/* 	int main(void)
{
	t_list **tmp;
	*tmp = malloc(sizeof(t_list));
	(*tmp) -> content = "abc";
	(*tmp) -> next = malloc(sizeof(t_list));
	(*tmp) -> next -> content = "def";
	(*tmp) -> next -> next = NULL;
	ft_lstclear(&*tmp, del);
	printf("%s\n", (char *)(*tmp)->content);
} */
