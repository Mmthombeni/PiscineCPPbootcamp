
NAME = convert

FLAG = -Wall -Wextra -Werror -lncurses

COMPILER = clang++ $(FLAG)

SRC  = Convert.cpp Convert.hpp main.cpp

OBJ = $(NAME)

all : $(NAME)

$(NAME) :
		$(COMPILER) $(SRC) $(FLAG) -o $(NAME)

clean:
		rm -f $(OBJ)
fclean: clean

re: fclean all
