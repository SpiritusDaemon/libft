#include "libft.h"

/* COPY FUNC TESTS DOWN BELOW */ /* testing ft_strmapi.c */

int main(void)
{
	t_list *teste = NULL;
	int i;
	teste = malloc(sizeof(t_list));
	teste->content = "abcd";
	teste->next = malloc(sizeof(t_list));
	teste ->next->content = "cdef";
	teste->next = malloc(sizeof(t_list));
	teste ->next->content = "xzy";
	teste->next = malloc(sizeof(t_list));
	teste ->next->content = "xzy";
	teste->next->next = NULL;
	i = ft_lstsize(teste);
	printf("%d\n", i);
}
