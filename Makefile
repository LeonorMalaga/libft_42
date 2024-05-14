# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/09 18:27:08 by leonmart          #+#    #+#              #
#    Updated: 2024/05/14 17:50:43 by leonmart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
	ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
	ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
	ft_putnbr_fd.c
BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
    ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:%.c=%.o)
OBJ_BONUS = $(BONUS:%.c=%.o)

$(NAME): $(OBJ)
	ar rs $(NAME) $(OBJ)
	
all: $(NAME)

bonus: ${NAME} ${OBJ_BONUS}
	ar rs ${NAME} ${OBJ_BONUS}
	
clean:
	rm -f *.o
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

