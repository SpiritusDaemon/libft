#include <stdio.h>

unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size);

unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(i - 1);
}

int ft_strlen(char *str);

int ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int main(void)
{
	char src[] = "misso";
	char dest[] = "testa";
	unsigned int size;

	size = ft_strlen(dest);
	ft_strlcpy(dest, src, size);
	printf("%s\n", dest);
	printf("%s\n", src);
	printf("%i\n", ft_strlcpy(dest, src, size - 1));
	return (0);
}
