/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:49:14 by gmarques          #+#    #+#             */
/*   Updated: 2022/10/25 20:49:14 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

/* int main(void)
{
	t_list *teste = NULL;
	int i;
	teste = malloc(sizeof(t_list));
	teste->content = "abcd";
	teste->next = malloc(sizeof(t_list));
	teste ->next->content = "cdef";
	teste->next->next = malloc(sizeof(t_list));
	teste ->next->next->content = "xzy";
	teste->next->next->next = malloc(sizeof(t_list));
	teste ->next->next->next->content = "xzy";
	teste->next->next->next->next = NULL;
	i = ft_lstsize(teste);
	printf("%d\n", i);
} */
