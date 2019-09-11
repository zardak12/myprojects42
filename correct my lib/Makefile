# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kosgrey <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/11 18:00:35 by kosgrey           #+#    #+#              #
#    Updated: 2019/09/11 18:37:51 by kosgrey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -c *.c -I libft.h
	@ar rc $(NAME) *.0
	@ranlib $(NAME)

clean:
	@/bin/rm -rf *.o

re: fclean all
