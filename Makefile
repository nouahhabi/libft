# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/12 22:12:04 by nouahhab          #+#    #+#              #
#    Updated: 2021/12/06 05:10:14 by nouahhab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS=-Wall -Werror -Wextra
NAME=libft.a
NAMES=	ft_atoi ft_bzero ft_isalnum ft_isalpha ft_isascii ft_isdigit \
		ft_isprint ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset \
		ft_strlen ft_strchr ft_strlcat ft_strncmp ft_strnstr ft_tolower \
		ft_toupper ft_strrchr ft_calloc ft_strdup ft_strlcpy ft_substr \
		ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_putchar_fd \
		ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_striteri

B_NAMES=ft_lstsize ft_lstnew ft_lstadd_front ft_lstlast ft_lstadd_back \
		ft_lstdelone ft_lstclear ft_lstiter ft_lstmap

FILES= $(NAMES:=.c)
OBJCTS= $(NAMES:=.o)
B_OBJCTS= $(B_NAMES:=.o)

all: $(NAME)

$(NAME): $(OBJCTS)
	ar rc $(NAME) $(OBJCTS)

clean:
	rm -rf $(OBJCTS) $(B_OBJCTS)

fclean: clean
	rm -rf $(NAME)

bonus: $(B_OBJCTS) $(OBJCTS)
	ar rc $(NAME) $(OBJCTS) $(B_OBJCTS)

re: fclean all

.PHONY: clean fclean all re bonus