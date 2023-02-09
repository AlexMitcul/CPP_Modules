# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/28 21:03:52 by amitcul           #+#    #+#              #
#    Updated: 2023/02/09 21:57:25 by amitcul          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fixed

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

SRC = Fixed.cpp main.cpp

all: $(NAME)
	./$(NAME) > my.log
	diff my.log main.log

$(NAME):
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all

.PHONY: all clean re
