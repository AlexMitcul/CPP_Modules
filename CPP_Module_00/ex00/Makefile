# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/28 21:03:52 by amitcul           #+#    #+#              #
#    Updated: 2023/01/28 21:08:52 by amitcul          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) megaphone.cpp -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all

.PHONY: all clean re
