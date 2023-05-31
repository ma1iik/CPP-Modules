# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 18:49:08 by ma1iik            #+#    #+#              #
#    Updated: 2023/04/30 18:17:32 by ma1iik           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp \
		Animal.cpp \
		Brain.cpp \

OBJ = $(SRC:%.cpp=%.o)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all : a.out

a.out : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o a.out

clean:
	rm -rf $(OBJ)

fclean : clean
	rm -rf a.out

re : fclean all
