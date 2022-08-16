/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 23:35:06 by gmarques          #+#    #+#             */
/*   Updated: 2022/08/14 23:35:06 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *ft_calloc(size_t nitems, size_t size);

void *ft_calloc(size_t nitems, size_t size)
{

	char *ptr;
	size_t i;

	i = -1;
	ptr = malloc(size * nitems);
	if(!ptr)
		return (NULL);
	while(i++ < size * nitems)
		ptr[i] = 0;
	return(ptr);

}

/* int main()
{
	char *ptr;
	size_t n = 5;

	ptr = (char*)ft_calloc(n, sizeof(char));
	ptr = "teste";
	printf("%s\n%p\n", ptr, ptr);
}
 */
