#include <string.h>
#include <stdio.h>

void *ft_memset(void *str, int c, size_t n);

void *ft_memset(void *str, int c, size_t n)
{
	size_t i;
	char *ptr;

	i = 0;
	ptr = str;
	while(i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}

int main (void)
{
	char str[] = "This is memset library function";
	printf("%s\n", str);
	ft_memset(str,'$', 7);
	printf("%s\n", str);
	/* memset(str,'$',7);
	printf("%s\n", str); */
	return(0);
}
