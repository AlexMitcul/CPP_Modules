# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/28 21:03:52 by amitcul           #+#    #+#              #
#    Updated: 2023/01/28 21:27:40 by alexmitcu        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phoneBook

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

HEADER	= Contact.hpp PhoneBook.hpp

SRC	= main.cpp Contact.cpp PhoneBook.cpp
OBJ	= $(SRC:=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all

.PHONY: all clean re
