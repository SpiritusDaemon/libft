#include <stdio.h>
int ft_tolower(int alpha);

int ft_tolower(int alpha)
{
	if(alpha >= 'A' && alpha <= 'Z')
		return(alpha + 32);
	return((char)alpha);
}


int main(void)
{
	char str = 'Z';
	printf("%c\n", ft_tolower((int)str));
	return (0);
}
