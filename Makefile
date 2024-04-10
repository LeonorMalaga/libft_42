# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/09 18:27:08 by leonmart          #+#    #+#              #
#    Updated: 2024/04/10 10:11:17 by leonmart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:%.c=%.o)

%.o:%.c
	@cc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	
all: $(NAME)
	
clean:
	@rm -f $(OBJ)
	
fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

