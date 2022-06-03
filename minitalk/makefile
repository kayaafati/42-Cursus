# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/16 11:39:16 by fkaya             #+#    #+#              #
#    Updated: 2022/05/25 08:45:51 by fkaya            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
LIBFT = libft

all: $(NAME)
	gcc server.c $(NAME) -o server
	gcc client.c $(NAME) -o client

$(NAME): $(LIBFT)
	make -C $(LIBFT)
	cp libft/libft.a .

clean:
	make clean -C $(LIBFT)

fclean: clean
	make fclean -C $(LIBFT)
	rm -rf $(NAME)
	rm -rf server client

.PHONY: clean


#SRC_SERVER = server.c minitalk_utils.c minitalk_utils2.c
#SRC_CLIENT = client.c minitalk_utils.c minitalk_utils2.c

#NAME_SERVER = server
#NAME_CLIENT = client

#OBJ_SERVER = server.o minitalk_utils.o minitalk_utils2.o
#OBJ_CLIENT = client.o minitalk_utils.o minitalk_utils2.o

#CC = gcc
#CFLAGS = -Wall -Wextra -Werror

#all: $(NAME_CLIENT) $(NAME_SERVER)

#$(NAME_SERVER): $(OBJ_SERVER)
#	$(CC) $(CFLAGS) $(SRC_SERVER) -o server

#$(NAME_CLIENT): $(OBJ_CLIENT)
#	$(CC) $(CFLAGS) $(SRC_CLIENT) -o client

#clean:
#	rm -f $(OBJ_SERVER) $(OBJ_CLIENT)
#fclean: clean
#	rm -f $(NAME_CLIENT) $(NAME_SERVER)
#re: fclean all

#.PHONY: server client all re fclean clean