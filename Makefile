# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/09 18:27:08 by leonmart          #+#    #+#              #
#    Updated: 2024/04/09 19:39:14 by leonmart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c
#NAME = libft
NAME = libft.a

LIB = libft.h
CCFLAGS = -Wall -Wextra -Werror -I $(LIB)


OBJ := $(SRC: %.c=%.o)

all: $(NAME)
$(NAME): $(OBJ)
#	@cc $(CFLAGS) $(OBJ) -o $@
	ar rcs $(NAME) $(OBJ)

#%.o:%.c
#	@cc $(CFLAGS) -I $(LIB) -c $< -o $@
	
clean:
	@rm -f $(OBJ)
	
fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

