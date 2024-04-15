# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/09 18:27:08 by leonmart          #+#    #+#              #
#    Updated: 2024/04/15 13:09:33 by leonmart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
	ft_strlcat.c
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:%.c=%.o)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	
all: $(NAME)
	
clean:
	rm -f *.o
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

