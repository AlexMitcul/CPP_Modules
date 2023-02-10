# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/28 21:03:52 by amitcul           #+#    #+#              #
#    Updated: 2023/02/10 00:11:51 by amitcul          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fixed

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

SRC = Fixed.cpp Point.cpp main.cpp

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all

export MAIN_LOG
t: all
	@echo "$$MAIN_LOG" > main.log
	@./$(NAME) > my.log
	@diff my.log main.log
	@rm main.log my.log

.PHONY: all clean re t

define MAIN_LOG
0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016
endef
