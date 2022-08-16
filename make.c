# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almatos <almatos@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/11 18:42:26 by almatos           #+#    #+#              #
#    Updated: 2022/08/16 15:50:48 by almatos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS	= -Wall -Wextra -Werror
RM		= @rm -f
INCLUDE	= libft.h
ARQ_LIB	= @ar -rc
RAN_LIB = @ranlib

SOURCES	= ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strrchr.c \
			ft_strnstr.c
OBJECTS	= $(SOURCES:.c=.o)

BONUS_SOURCES = ft_strreverse_bonus.c ft_strstr_bonus.c
BOUS_OBJECTS = $(BONUS_SOURCES:.c=.o)

MESSAGE = @echo "Congratulations ✔︎"
MAIN_NAME = main_test.c
MAIN = ./test_exec
BIN = -o test_exec
CC = gcc

all:	$(NAME)

$(NAME):	$(OBJECTS) $(INCLUDE)
			$(ARQ_LIB) $(NAME) $(OBJECTS)
			$(RAN_LIB) $(NAME)
			clear
			$(MESSAGE)

bonus:		$(NAME) $(BOUS_OBJECTS) 
			$(ARQ_LIB) $(NAME) $(BOUS_OBJECTS) 
			$(RAN_LIB) $(NAME)
			clear
			$(MESSAGE)
clean: 
			$(RM) $(OBJECTS) $(BOUS_OBJECTS)
			$(MESSAGE)

main:		
			$(RM) $(MAIN)
			$(MESSAGE)

a:		
			$(RM) $(NAME)  
			$(MESSAGE)

help:		
			@echo "COMANDOS DISPONÍVEIS:"	
			@echo ""
			@echo "clean: Limpar objetos"
			@echo "a: Exclui arquivo .a"
			@echo "man: Exclui o main_test "
			@echo "run: Compila a biblioteca inteira e executa o main_teste completo "
			@echo "fclean: "
			@echo "re: "

run:		bonus
			$(CC) $(MAIN_NAME) $(NAME) $(CFLAGS) $(BIN) 
			$(RM) $(OBJECTS) $(BOUS_OBJECTS) 
			clear
			$(MAIN)
			$(RM) $(MAIN) $(NAME)

fclean:		clean
			$(RM) $(NAME) $(BOUS_OBJECTS)
			$(MESSAGE)

re:			fclean all
			$(MESSAGE)

.PHONY: all clean fclean re