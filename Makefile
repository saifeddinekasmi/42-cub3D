# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 18:55:39 by skasmi            #+#    #+#              #
#    Updated: 2023/01/06 22:43:41 by skasmi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
CFLAGS=  -Wall -Wextra -Werror -Imlx -g -fsanitize=address

NAME=cub3D
NAME2=cub3d.h

SRCS=cub3d.c \
	utils_2.c\
	check_error.c \
	libft/ft_strlen.c \
	libft/ft_split.c \
	libft/ft_strtrim.c \
	libft/ft_memmove.c \
	libft/ft_substr.c \
	libft/ft_memcpy.c \
	get_next_line/get_next_line.c \
	get_next_line/get_next_utils.c \
	
BOBJCTS=$(BSRCS:%.c=%.o)

OBJCTS=$(SRCS:%.c=%.o)

$(NAME) : $(OBJCTS) $(NAME2)
		$(CC) $(CFLAGS) -L /usr/local/lib -lmlx -framework OpenGl -framework AppKit $(OBJCTS) -o $(NAME) 
			
	@echo "\033[31m░█████╗░\033[31m██╗░░░██╗\033[31m██████╗░  \033[32m██████╗░\033[32m██████╗░"
	@echo "\033[31m██╔══██╗\033[31m██║░░░██║\033[31m██╔══██╗  \033[32m╚════██╗\033[32m██╔══██╗"
	@echo "\033[31m██║░░╚═╝\033[31m██║░░░██║\033[31m██████╦╝  \033[32m░█████╔╝\033[32m██║░░██║"
	@echo "\033[31m██║░░██╗\033[31m██║░░░██║\033[31m██╔══██╗  \033[32m░╚═══██╗\033[32m██║░░██║"
	@echo "\033[31m╚█████╔╝\033[31m╚██████╔╝\033[31m██████╦╝  \033[32m██████╔╝\033[32m██████╔╝"
	@echo "\033[31m░╚════╝░\033[31m░╚═════╝░\033[31m╚═════╝░  \033[32m╚═════╝░\033[32m╚═════╝░"
all: $(NAME)
	
clean:	
				rm -f $(OBJCTS) $(BOBJCTS)

fclean: clean
				rm -f $(NAME)

re: fclean all 
