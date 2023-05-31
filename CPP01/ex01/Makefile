# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/07 10:53:54 by ma1iik            #+#    #+#              #
#    Updated: 2023/04/07 15:55:10 by ma1iik           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Horde

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	zombieHorde.cpp\
		Zombie.cpp \
		main.cpp \

OBJ = $(SRC:%.cpp=%.o)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
