COMPILE = gcc
FLAGS = -Wall -Wextra -Werror
PROGRAM = ft_strjoin.c
RUN = ./main
OBJECTS	= -o
HELPERS = ft_strlen.c ft_strlcpy.c ft_strlcat.c
TEST_NAME = main

all:
		$(COMPILE) $(FLAGS) $(HELPERS) $(PROGRAM) $(OBJECTS) $(TEST_NAME)
		$(RUN)


