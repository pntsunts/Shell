# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pntsunts <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/24 10:43:56 by pntsunts          #+#    #+#              #
#    Updated: 2020/06/30 13:17:13 by pntsunts         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell

FLAGS = -Wall -Werror -Wextra

SRC = main.c get_data.c get_next_line.c ft_echo.c ft_setenv.c

OBJ = $(SRC:.c=.o)

$(NAME) :
		@gcc -c $(SRC) $(FLAGS)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)
		@rm -rf $(OBJ)

all: $(NAME)

clean:
		@rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

c:
	@gcc $(FLAGS) main.c libft/libft.a $(NAME) -o shell

re: fclean all

N:
	norminette
