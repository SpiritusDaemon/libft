CC = gcc
FLAGS = -Wall -Wextra -Werror
PROGRAM = ft_memcmp.c
RUN = ./a.out

all:
		clear
		$(CC) $(FLAGS) $(PROGRAM)
		$(RUN)

clean:

