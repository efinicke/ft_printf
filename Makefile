# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/01 12:37:11 by efinicke          #+#    #+#              #
#    Updated: 2021/04/07 11:41:42 by efinicke         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_ask_vortex.c \
	ft_atoi_printf.c \
	ft_basics_00.c \
	ft_basics_01.c \
	ft_parsing.c \
	ft_conditions.c \
	ft_add.c \
	ft_init_struct.c \
	ft_itoa_base.c \
	ft_itoa.c \
	ft_printf.c \
	ft_types.c \
	ft_types_digit.c \
	ft_flags.c \

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $@ $^
	ranlib $@

.c.o:
	$(CC) -c $(CFLAGS) $<

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS) $(NAME)

re: fclean all

.PHONY:	all clean fclean re
