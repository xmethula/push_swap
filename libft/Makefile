# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xmethula <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 09:42:44 by xmethula          #+#    #+#              #
#    Updated: 2019/09/10 16:18:23 by xmethula         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra -c
FILES		= ft_memset.c \
			  ft_bzero.c \
			  ft_memcpy.c \
			  ft_memccpy.c \
			  ft_memmove.c \
			  ft_memchr.c \
			  ft_memcmp.c \
			  ft_strlen.c \
			  ft_strdup.c \
			  ft_strcpy.c \
			  ft_strncpy.c \
			  ft_strcat.c \
			  ft_strncat.c \
			  ft_strlcat.c \
			  ft_strchr.c \
			  ft_strrchr.c \
			  ft_strstr.c \
			  ft_strnstr.c \
			  ft_strcmp.c \
			  ft_strncmp.c \
			  ft_atoi.c \
			  ft_isalpha.c \
			  ft_isdigit.c \
			  ft_isalnum.c \
			  ft_isascii.c \
			  ft_isprint.c \
			  ft_toupper.c \
			  ft_tolower.c \
			  ft_islower.c \
			  ft_isupper.c \
			  ft_memalloc.c \
			  ft_memdel.c \
			  ft_strnew.c \
			  ft_strdel.c \
			  ft_strclr.c \
			  ft_striter.c \
			  ft_striteri.c \
			  ft_strmap.c \
			  ft_strmapi.c \
			  ft_strequ.c \
			  ft_strnequ.c \
			  ft_strsub.c \
			  ft_strjoin.c \
			  ft_strtrim.c \
			  ft_strsplit.c \
			  ft_itoa.c \
			  ft_putchar.c \
			  ft_putstr.c \
			  ft_putendl.c \
			  ft_putnbr.c \
			  ft_putchar_fd.c \
			  ft_putstr_fd.c \
			  ft_putendl_fd.c \
			  ft_putnbr_fd.c \
			  ft_putnbr_endl.c \
			  ft_isnbr.c \
			  get_next_line.c
OBJ			= $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(FILES)
	gcc $(CFLAGS) $(FILES)

norm: 
	norminette -R CheckForbiddenSourceHeader

clean:
	rm -f $(OBJ)	

fclean: clean
	rm -f $(NAME)

re: fclean all
