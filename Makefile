# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fferrer- <fferrer-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/20 21:28:44 by fferrer-          #+#    #+#              #
#    Updated: 2022/05/21 02:34:59 by fferrer-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_calloc.c	ft_isdigit.c	ft_memcpy.c		ft_strlcat.c	ft_strnstr.c	ft_isalnum.c \
	ft_isprint.c	ft_memmove.c	ft_strlcpy.c	ft_strrchr.c	ft_atoi.c		ft_isalpha.c \
	ft_memchr.c		ft_memset.c		ft_strlen.c		ft_tolower.c	ft_bzero.c		ft_isascii.c \
	ft_memcmp.c		ft_strchr.c		ft_strncmp.c	ft_toupper.c	ft_strdup.c		ft_substr.c \
	ft_strjoin.c	ft_strtrim.c	ft_split.c		ft_strmapi.c	ft_striteri.c	ft_putchar_fd.c \
	ft_putstr_fd.c	ft_putendl_fd.c	ft_itoa.c		ft_putnbr_fd.c \

OBJ = $(SRC:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror -I.

all: $(NAME)

%.o:	%.c
		$(CC) -c $(FLAGS) $^

$(NAME):	$(OBJ)
		ar -crs $@ $^

clean:
		@rm -f $(OBJ) $(OBJ_BONUS)

fclean:	clean
		@rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re 