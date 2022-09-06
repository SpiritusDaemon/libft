NAME = libft.a
CC = @gcc
CFLAGS = -Wall -Wextra -Werror
RUN = @./main
DEFAULT = testes.c
FUNCS = libft.a
TEST_NAME = -o main
CLEAN_OBJECTS = @rm -rf *.o
VALGRIND = @valgrind --leak-check=full --track-origins=yes ./main
ARCOMMAND = @ar -r libft.a *.o
ARLIST = @ar -t libft.a
CREATE_OBJECTS = @gcc -c *.c
DELETE_MAIN = @ar -d libft.a testes.o
all:
	$(CC) $(CFLAGS) $(DEFAULT) $(FUNCS) $(TEST_NAME)
	$(RUN)

clean :
	$(CLEAN_OBJECTS)

fclean:


re:


valgrind:
	$(VALGRIND)

ar:
	$(CREATE_OBJECTS)
	$(ARCOMMAND)
	$(CLEAN_OBJECTS)
	$(DELETE_MAIN)


list:
	$(ARLIST)
