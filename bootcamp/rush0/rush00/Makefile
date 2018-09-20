# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmthombe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/10 09:31:21 by mmthombe          #+#    #+#              #
#    Updated: 2018/06/10 09:31:27 by mmthombe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_retro

FLAG = -Wall -Wextra -Werror -lncurses

COMPILER = clang++ $(FLAG)

SRC  = GameEntity.cpp Enemy.cpp PlayerShip.cpp ft_retro.cpp

OBJ = $(NAME)

all : $(NAME)

$(NAME) :
		$(COMPILER) $(SRC) $(FLAG) -o $(NAME)

clean:
		rm -f $(OBJ)
fclean: clean

re: fclean all
