# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: noah-baz <noah-baz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/22 16:41:10 by nbaz-sil          #+#    #+#              #
#    Updated: 2026/06/08 23:05:54 by noah-baz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  libftprintf.a

CC = cc -Wall -Wextra -Werror

SRC = ft_printf.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) 

%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re