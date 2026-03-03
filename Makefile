# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/24 13:38:53 by nmeunier          #+#    #+#              #
#    Updated: 2026/03/03 19:28:25 by nmeunier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = libft/ft_split.c \
		libft/ft_putstr_fd.c

SRCS = $(LIBFT) src/verif_nbr.c \
				src/sort_stack.c \
				src/sort_small.c \
				src/parsing.c \
				src/radix.c \
				src/main.c \
				src/swap.c \
				src/free.c \
				src/push.c \
				src/rotate.c \
				src/utils.c

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -g

NAME = push_swap
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus_re: fclean bonus

.PHONY: all bonus clean fclean re bonus_re libft
