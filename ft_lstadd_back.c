/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:13:16 by gmarques          #+#    #+#             */
/*   Updated: 2022/10/26 22:13:16 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	else if (*lst == NULL)
		*lst = new;
	else
	{
		temp = ft_lstlast(*lst);
		temp -> next = new;
	}
}

/* int main()
{
	t_list *teste;
	t_list *add;
	t_list *temp;

	teste -> content = "abc";
	add -> content = "def";
	ft_lstadd_back(&teste, add);
	while (teste)
	{
		printf("%s\n", (char *)teste -> content);
		teste = teste -> next;
	}

} */
