/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 19:21:43 by gmarques          #+#    #+#             */
/*   Updated: 2022/09/09 19:21:43 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*temp;
	int		i;
	i = -1;
	temp = (char*) malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	if (temp == NULL)
		return (NULL);
	while (s[++i])
		temp[i] = f(i, s[i]);
	temp[i] = '\0';
		return (temp);
}

/* static char    ft_strmapi_aux_test1(unsigned int i, char c)
{
    (void)i;
    return (ft_toupper(c));
}
static char    ft_strmapi_aux_test2(unsigned int i, char c)
{
    (void)i;
    return (ft_tolower(c));
}
void    ft_strmapi_test(void)
{
    printf("\n\n--FT_STRMAPI--\n\n");

    char *s1 = "test1";
    char *s1p;
    s1p = ft_strmapi(s1, &ft_strmapi_aux_test1);
    printf("ft_  - : %s\n\n", s1p);
    free (s1p);
    char *s2 = "TEST2";
    char *s2p;
    s2p = ft_strmapi(s2, &ft_strmapi_aux_test2);
    printf("ft_  - : %s\n\n", s2p);
    free (s2p);
}

int main(void)
{
	ft_strmapi_test();
} */
