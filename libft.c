#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t ft_strlcat( char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while(src[i])
	{
		dst[size] = src[i];
		i++;
		size++;
	}
	dst[size] = '\0';
	return(size);
}

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

int ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}
