# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rramirez <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 16:07:44 by rramirez          #+#    #+#              #
#    Updated: 2016/11/07 16:15:22 by rramirez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CCFLAGS = -Wall -Werror -Wextra

CC = gcc -c

OS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
	  srcs/ft_swap.c

HEADER = ./includes/

all : $(NAME)

$(NAME) : 
	$(CC) $(CCFLAGS) $(SRC) -I $(HEADER) 
	ar rc $(NAME) $(OS)
	ranlib $(NAME)

clean :
	/bin/rm -f $(OS)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
