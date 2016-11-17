# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rramirez <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/10 14:07:16 by rramirez          #+#    #+#              #
#    Updated: 2016/11/10 21:02:34 by rramirez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CCFLAGS = -Wall -Werror -Wextra

OS = ft_putchar.o ft_putstr.o ft_display_file.o ft_derror.o

CC = gcc

SRC = ft_putchar.c ft_putstr.c ft_display_file.c ft_derror.c

HEADER = display.h

all : $(NAME)

$(NAME) :
	$(CC) -c $(CCFLAGS) -I $(HEADER) $(SRC)
	$(CC) -o $(NAME) $(OS)

clean :
	/bin/rm -f $(OS)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
