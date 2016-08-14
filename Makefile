# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnieto-m <lnieto-m@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/07 18:24:41 by lnieto-m          #+#    #+#              #
#    Updated: 2016/08/14 13:50:41 by lnieto-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang

SRC_PATH = srcs

OBJ_PATH = obj

CFLAGS = -Wall -Wextra -Werror

CPFLAGS = -I ./ft_printf/includes -I./libft/includes -I ./includes

NAME = push_swap

NAME2 = checker

SRC_NAME = push_swap/main.c \
		   push_swap/ft_error.c \
		   push_swap/ft_doublon.c \
		   push_swap/list_functions.c \
		   push_swap/operations.c \
		   push_swap/swap.c \
		   push_swap/rotate.c \
		   push_swap/reverse_rotate.c \
		   push_swap/push.c \

SRC_NAME2 = checker/main.c \

OBJ_NAME = $(SRC_NAME:.c=.o)

OBJ_NAME2 = $(SRC_NAME2:.c=.o)

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

SRC2 = $(addprefix $(SRC_PATH)/,$(SRC_NAME2))

OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

OBJ2 = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME2))

LIBFT_PATH = libft/libft.a

all: $(NAME) $(NAME2)

$(NAME): $(OBJ)
	make -C libft/
	$(CC) $(LIBFT_PATH) $(LFLAGS) $^ -o $@

$(NAME2): $(OBJ2)
	make -C libft/
	$(CC) $(LIBFT_PATH) $(LFLAGS) $^ -o $@

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@mkdir $(OBJ_PATH)/checker 2> /dev/null || true
	@mkdir $(OBJ_PATH)/push_swap 2> /dev/null || true
	$(CC) $(CFLAGS) $(CPFLAGS) -o $@ -c $<

clean:
	make -C libft/ clean
	rm -rf $(OBJ)
	rm -rf $(OBJ_PATH)

fclean: clean
	make -C libft/ fclean
	rm -rf $(NAME)
	rm -rf $(NAME2)

re: fclean all

.PHONY: clean fclean re all
