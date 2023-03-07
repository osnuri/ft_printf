# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osyuceba <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 16:01:04 by osyuceba          #+#    #+#              #
#    Updated: 2023/03/07 16:01:05 by osyuceba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c \
			ft_printf_utils.c

NAME	= libftprintf.a
OBJS	= $(SRCS:.c=.o)
FLAGS	= -Wall -Wextra -Werror

$(NAME):
		gcc $(FLAGS)   -c $(SRCS) -I   ./
		ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
