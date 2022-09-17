#include "libft.h"

/* COPY FUNC TESTS DOWN BELOW */ /* testing ft_strmapi.c */

int main(void)
{
	int fd = open("teste.txt", O_CREAT | O_WRONLY);
	int n = 5;

	ft_putnbr_fd(n, fd);

	if(fd == 3)
		printf("success!\n");

	close(fd);
}
