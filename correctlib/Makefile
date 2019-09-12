# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kosgrey <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/11 18:00:35 by kosgrey           #+#    #+#              #
#    Updated: 2019/09/12 17:41:59 by kosgrey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -c *.c -I libft.h
	@ar rc $(NAME) *.o
	@ranlib $(NAME)

clean:
	@/bin/rm -rf *.o

fclean: clean
	@/bin/rm -rf $(NAME)

re: fclean all
