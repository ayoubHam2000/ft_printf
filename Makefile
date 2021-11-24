# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 13:30:44 by aben-ham          #+#    #+#              #
#    Updated: 2021/11/24 12:06:20 by aben-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFLAGS =  -Wall -Wextra -Werror -I. -c
FILES = ft_printf.c\
			util/fu_numlen.c\
			util/fu_putint.c\
			util/fu_putuint.c\
			util/fu_putstr.c\
			util/fu_putchar.c\
			util/fu_putestr.c\
			util/fu_puthex.c\
			util/fu_putptr.c

OBJ = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJ)

clean:
	$(MAKE) clean -C ./libft
	rm -f $(OBJ)

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -f $(NAME)

re: fclean all
