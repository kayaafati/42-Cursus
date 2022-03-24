# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/01 16:46:54 by fkaya             #+#    #+#              #
#    Updated: 2022/03/17 11:45:02 by fkaya            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libftprintf.a
CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror
INCLUDE := include
LIBFT	:= libft
#FILES	:= $(shell find . -type f ! -name "ft_lst*.c" -name "ft_*.c")
#OBJ		:= $(FILES:%.c=%.o)
RM		:= rm -f
AR		:= ar rcs

SRC	:= $(wildcard *.c)
OBJ	:= $(SRC:%.c=%.o)

all:	$(NAME)

$(NAME): $(OBJ)
#	ar	-rcs $(NAME) $(OBJ)
		make -C $(LIBFT)
		cp libft/libft.a .
		mv libft.a $(NAME)
		$(AR) $(NAME) $(OBJ)

%.o: %.c
		@$(CC) $(CFLAGS) -c $< -o $@
#bonus:	$(OBJ) $(OBJ)
#	ar	-rcs $(NAME) $(OBJ) $(B_OBJ)

clean:
		@rm -f *.o
		make clean -C $(LIBFT)

fclean:	clean
#	@rm -f $(NAME)
		@$(RM) -f $(NAME)
		@$(RM) -f $(LIBFT)/libft.a

re:		fclean all

.PHONY:	all clean fclean re