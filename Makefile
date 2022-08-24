NAME = libft.a
CC = @gcc
CFLAGS = -Wall -Wextra -Werror
RUN = @./main
OBJECTS	= -o
FUNCS = *.c
TEST_NAME = main
CLEAN_OBJECTS = rm -rf *.o

all:
		$(CC) $(CFLAGS) $(OBJECTS) $(FUNCS) $(OBJECTS) $(TEST_NAME)
		$(RUN)

clean :
		$(CLEAN_OBJECTS)

fclean:


re:
