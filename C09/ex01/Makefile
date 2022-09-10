# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esalim <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/12 17:52:02 by esalim            #+#    #+#              #
#    Updated: 2022/04/14 15:07:15 by esalim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
INCLUDES = includes
OBJS = $(SRCS:.c=.o)

all: $(NAME)
	
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -I $(INCLUDES) -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

