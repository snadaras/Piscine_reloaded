# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snadaras <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/11 18:24:18 by snadaras          #+#    #+#              #
#    Updated: 2017/11/16 12:01:29 by snadaras         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(SOURCE_PATH)ft_putchar.c \
	 $(SOURCE_PATH)ft_putstr.c \
	$(SOURCE_PATH)ft_strcmp.c \
	$(SOURCE_PATH)ft_strlen.c \
	$(SOURCE_PATH)ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

INCLUDE_PATH = ./includes/
SOURCE_PATH = ./srcs/
FLAGS += -Wall -Wextra -Werror
OPTIONS = -I $(INCLUDE_PATH)

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) $(OPTIONS)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
