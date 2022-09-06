#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char *temp;
	int size;
	int i;
	i = -1;
	if (!(temp = malloc(ft_strlen(((char *)s)) + 1 * sizeof(char))))
		return (NULL);
	while (s[i++])
		temp[i] = f(i, s[i]);
	temp[i] = '\0';
		return (temp);
}
