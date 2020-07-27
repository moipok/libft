# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/13 01:54:12 by fbarbera          #+#    #+#              #
#    Updated: 2020/05/20 04:24:26 by fbarbera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEAD = libft.h

SRCS = ft_strlen.c ft_strlcpy.c \
       ft_strlcat.c ft_strchr.c \
       ft_strrchr.c ft_strnstr.c \
       ft_strncmp.c ft_atoi.c \
       ft_isalpha.c ft_isdigit.c \
       ft_isalnum.c ft_isascii.c \
       ft_isprint.c ft_toupper.c \
       ft_tolower.c ft_strdup.c \
       ft_memset.c ft_bzero.c \
       ft_calloc.c ft_memcpy.c \
       ft_memccpy.c ft_memmove.c \
       ft_memchr.c ft_memcmp.c \
       ft_putchar_fd.c ft_putstr_fd.c \
       ft_putnbr_fd.c ft_putendl_fd.c \
       ft_itoa.c ft_split.c \
       ft_strmapi.c ft_strjoin.c \
       ft_strtrim.c ft_substr.c


SRCO = ft_strlen.o ft_strlcpy.o \
       ft_strlcat.o ft_strchr.o \
       ft_strrchr.o ft_strnstr.o \
       ft_strncmp.o ft_atoi.o \
       ft_isalpha.o ft_isdigit.o \
       ft_isalnum.o ft_isascii.o \
       ft_isprint.o ft_toupper.o \
       ft_tolower.o ft_strdup.o \
       ft_memset.o ft_bzero.o \
       ft_calloc.o ft_memcpy.o \
       ft_memccpy.o ft_memmove.o \
       ft_memchr.o ft_memcmp.o \
       ft_putchar_fd.o ft_putstr_fd.o \
       ft_putnbr_fd.o ft_putendl_fd.o \
       ft_itoa.o ft_split.o \
       ft_strmapi.o ft_strjoin.o \
       ft_strtrim.o ft_substr.o

all: $(NAME)

$(NAME): 
	gcc -Wall -Wextra -Werror -c $(SRCS) $(HEAD)
	ar rc $(NAME) $(SRCO)
	ranlib $(NAME)

clean:
	/bin/rm -f $(SRCO)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all


.PHONY: $(NAME) clean fclean re
