# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/02 23:53:25 by sarbaill          #+#    #+#              #
#    Updated: 2019/01/07 19:16:04 by sarbaill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = 	ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memset.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memmove.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_putendl.c \
		ft_strcat.c \
		ft_strcmp.c \
		ft_strcpy.c \
		ft_strdup.c \
		ft_strlen.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_strncmp.c \
		ft_strncpy.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putstr_fd.c \
		ft_strclr.c \
		ft_putnbr_fd.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strdel.c \
		ft_strnew.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_itoa.c \
		ft_strsplit.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_is_prime.c \
		ft_iterative_factorial.c \
		ft_iterative_power.c \
		ft_recursive_factorial.c \
		ft_recursive_power.c \
		ft_str_is_uppercase.c \
		ft_str_is_lowercase.c \
		ft_strlowcase.c \
		ft_strcapitalize.c \
		ft_str_is_alpha.c \
		ft_str_is_numeric.c \
		ft_strlowcase.c \
		ft_strupcase.c \
		ft_sqrt.c \
		ft_str_is_printable.c \


OBJ = $(SRC:.c=.o)

FLAG = -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(OBJ)
			@ar rcs $(NAME) $(OBJ)

%.o : %.c
			@gcc -c $< $(FLAG)

clean :
			@rm -rf $(OBJ)

fclean :	clean
			@rm -rf $(NAME)

re :		fclean all

