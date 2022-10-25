NAME = libft.a
TEST_FILE = testes.c
FUNCS =	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

CC = gcc
OBJ = $(FUNCS:.c=.o)
B_OBJ = $(BONUS:.c=.o)

BONUS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \

FLAGS =	-Wall \
		-Wextra \
		-Werror \

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $@ $^

run: $(OBJ) $(B_OBJ)
	$(CC) $(FLAGS) $(TEST_FILE) $(NAME) -o main
	./main

clean:
	rm -rf $(OBJ) $(B_OBJ)

fclean: clean
	rm -rf $(NAME)
	rm -rf main

re:
	rm -rf $(NAME)
	make $(NAME)
	make clean

bonus:$(NAME) $(B_OBJ)
		ar -rcs $^

.PHONY: all clean run re fclean bonus
