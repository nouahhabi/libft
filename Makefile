# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/12 22:12:04 by nouahhab          #+#    #+#              #
#    Updated: 2021/11/14 00:48:44 by nouahhab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
FLAGS=-Wall -Werror -Wextra
NAME=libft.a
NAMES=	ft_atoi ft_bzero ft_isalnum ft_isalpha ft_isascii ft_isdigit \
		ft_isprint ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset \
		ft_strlen ft_strchr ft_strlcat ft_strncmp ft_strnstr ft_tolower \
		ft_toupper ft_strrchr ft_calloc ft_strdup ft_strlcpy ft_substr \
		ft_strjoin ft_strtrim

FILES= $(NAMES:=.c)
OBJCTS= $(NAMES:=.o)

.PHONY: clean fclean all re

all: $(NAME)

$(NAME): $(OBJCTS)
	ar rc $(NAME) $(OBJCTS)

%.o : %.c
	$(CC) $(FLAGS) -c $? -o $@

clean:
	rm -rf $(OBJCTS)

fclean: clean
	rm -rf $(NAME)
	
re: fclean all
