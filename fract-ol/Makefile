NAME = fraktal

CC = gcc

FLAGS = -Wall -Wextra -Werror -L minilibx -lmlx -framework OpenGL -framework AppKit

SRC = $(wildcard src/*.c)

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all
