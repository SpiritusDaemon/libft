/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:03:04 by gmarques          #+#    #+#             */
/*   Updated: 2022/08/16 21:03:04 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;

	i = -1;
	char	*dup;
	if (!(dup = (char*)malloc(sizeof(char) * (ft_strlen((char*)s) + 1))))
		return (NULL);
	while (s[i++])
		dup[i] = s[i];
	dup[i] = '\0';
	return (dup);
}

/* int main(int ac, char **av)
{
	if(ac != 2)
		return(0);

	char *s1 = strdup(av[1]);
	char *s2 = ft_strdup(av[1]);

	printf(":%s:\n", s1);
	printf(":%s:\n", s2);

}
 */

/* int main(void)
{
	char s1[] = "teste";
	printf(":%s:\n", ft_strdup(s1));
	printf(":%s:\n", strdup(s1));

} */
