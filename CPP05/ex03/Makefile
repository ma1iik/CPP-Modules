# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: misrailo <misrailo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 18:49:08 by ma1iik            #+#    #+#              #
#    Updated: 2023/06/12 18:18:05 by misrailo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

SRC =	main.cpp \
		Bureaucrat.cpp \
		AForm.cpp	\
		PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp \
		ShrubberyCreationForm.cpp \
		Intern.cpp \

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
