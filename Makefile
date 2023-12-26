# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jesumore <jesumore@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/04 18:20:28 by jesumore          #+#    #+#              #
#    Updated: 2023/12/11 18:40:08 by jesumore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	= -Wall -Wextra -Werror
NAME	= libft.a
SRCS	= libft.h ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_strchr.c ft_strlcat.c /
		  ft_strncmp.c ft_tolower.c ft_toupper.c ft_strrchr.c 
OBJS	= $(SRCS:.c=.o)

.c.o :
	gcc -c $(CFLAGS) $< -o $@
.PHONY: clean
clean :
	rm -f *.o  $(NAME)