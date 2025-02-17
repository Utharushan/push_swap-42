# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tuthayak <tuthayak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/11 00:09:32 by tuthayak          #+#    #+#              #
#    Updated: 2025/02/11 00:09:32 by tuthayak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = main.c \
       stack_utils.c \
       sorting_small.c \
       sorting_large.c \
       rotate_operations.c \
       reverse_rotate_operations.c \
       push_operations.c \
       parsing.c \
       parsing_string.c \
       error_handling.c \
       swap_operations.c \
       ft_split.c
OBJS = $(SRCS:.c=.o)
LIBNAME = push_swap.a

all: $(NAME)

$(LIBNAME): $(OBJS)
	ar rcs $(LIBNAME) $(OBJS)

$(NAME): $(LIBNAME)
	$(CC) $(CFLAGS) -o $(NAME) $(LIBNAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(LIBNAME)

re: fclean all

.PHONY: all clean fclean re
