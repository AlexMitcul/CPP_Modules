# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/28 21:03:52 by amitcul           #+#    #+#              #
#    Updated: 2023/01/31 18:27:17 by amitcul          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phoneBook

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

HEADER	= Contact.hpp PhoneBook.hpp

SRC	= main.cpp Contact.cpp PhoneBook.cpp

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all

.PHONY: all clean re
