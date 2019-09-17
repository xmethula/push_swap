# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/13 07:44:52 by xmethula          #+#    #+#              #
#    Updated: 2019/09/17 09:18:43 by xmethula         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS			= -Wall -Werror -Wextra
CHECKER			= checker
PUSH_SWAP		= push_swap

S_SRC			= srcs/shared/swap.c \
				  srcs/shared/push.c \
				  srcs/shared/rotate.c \
				  srcs/shared/rev_rotate.c \
				  srcs/shared/fill_stack.c \
				  srcs/shared/stack_len.c \
				  srcs/shared/duplicates.c \
				  srcs/shared/is_sorted.c  \
				  srcs/shared/print_error.c \
				  srcs/shared/free_stack.c

C_SRC			= srcs/checker/checker.c \
				  srcs/checker/read_stdin.c

P_SRC			= srcs/push_swap/push_swap.c \
				  srcs/push_swap/find_small_big.c \
				  srcs/push_swap/five_less.c \
				  srcs/push_swap/hundred_less.c \
				  srcs/push_swap/five_hundred_less.c

all: $(CHECKER) $(PUSH_SWAP)

$(CHECKER):
	make re -C libft/
	gcc $(FLAGS) $(S_SRC) $(C_SRC) libft/libft.a -o $(CHECKER)

$(PUSH_SWAP):
	gcc $(FLAGS) $(S_SRC) $(P_SRC) libft/libft.a -o $(PUSH_SWAP)

clean:
	make clean -C libft/

fclean:
	make fclean -C libft/
	rm -f $(CHECKER) $(PUSH_SWAP)

re: fclean all
