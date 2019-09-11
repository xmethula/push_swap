# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xmethula <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/11 14:27:40 by xmethula          #+#    #+#              #
#    Updated: 2019/09/11 16:19:04 by xmethula         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS			= -Wall -Werror -Wextra

S_SRC_DIR		= srcs/shared/
C_SRC_DIR		= srcs/checker/
P_SRC_DIR		= srcs/push_swap/

S_SRC			= duplicates.c \
				  is_sorted.c \
				  stack_len.c \
				  fill_stack.c \
				  do_sa.c \
				  do_sb.c \
				  do_ss.c \
				  do_ra.c \
				  do_rb.c \
				  do_rr.c \
				  do_rra.c \
				  do_rrb.c \
				  do_rrr.c \
				  do_pa.c \
				  do_pb.c

C_SRC			= checker.c \
				  read_stdin.c 

P_SRC			= push_swap.c \
				  five_less.c \
				  interval.c \
				  hundred_less.c \
				  five_hundred_less.c \
				  find_small_big.c

all:
	make -C libft/
	gcc $(S_SRC_DIR)*.c $(C_SRC_DIR)*.c libft/libft.a -o checker
	gcc $(S_SRC_DIR)*.c $(P_SRC_DIR)*.c libft/libft.a -o push_swap

clean:
	make clean -C libft/

fclean:
	make fclean -C libft/

re:	fclean all
