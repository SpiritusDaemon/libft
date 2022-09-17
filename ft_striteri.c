void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int i;

	i = -1;
	while (s[++i])
		f(i, &s[i]);
}

/* static void    ft_striteri_aux_test2(unsigned int i, char *c)
{
    i = -1;
    while (c[++i])
        *(c + i) = ft_tolower(*(c + i));
}

static void    ft_striteri_aux_test1(unsigned int i, char *c)
{
    i = -1;
    while (c[++i])
        *(c + i) = ft_toupper(*(c + i));
}
void    ft_striteri_test(void)
{
    printf("\n\n--FT_STRITERI--\n\n");

    char s1[] = "test1";
    char *s1p;
    s1p = s1;
    ft_striteri(s1p, &ft_striteri_aux_test1);
    printf("ft_  - s1 \"test1\" || ft_toupper || s1 : %s\n\n", s1p);
    char s2[] = "TEST2";
    char *s2p;
    s2p = s2;
    ft_striteri(s2p, &ft_striteri_aux_test2);
    printf("ft_  - s2 \"TEST2\" || ft_tolower || s2 : %s\n\n", s2p);
}

int main (void)
{
	ft_striteri_test();
}
 */
