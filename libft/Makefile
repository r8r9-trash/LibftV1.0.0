# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 13:14:37 by tbelleng          #+#    #+#              #
#    Updated: 2022/11/15 11:41:52 by tbelleng         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_isalpha.c	\
	ft_isdigit.c	\
	ft_isalnum.c	\
	ft_isascii.c	\
	ft_isprint.c	\
	ft_strlen.c	\
	ft_memset.c	\
	ft_bzero.c	\
	ft_memcpy.c	\
	ft_memmove.c	\
	ft_strlcpy.c	\
	ft_strlcat.c	\
	ft_toupper.c	\
	ft_tolower.c	\
	ft_strchr.c	\
	ft_strrchr.c	\
	ft_strncmp.c	\
	ft_memchr.c	\
	ft_memcmp.c	\
	ft_strnstr.c	\
	ft_atoi.c	\
	ft_calloc.c	\
	ft_strdup.c	\
	ft_substr.c	\
	ft_strjoin.c	\
	ft_strtrim.c	\
	ft_split.c	\
	ft_itoa.c	\
	ft_strmapi.c	\
	ft_striteri.c	\
	ft_putchar_fd.c	\
	ft_putstr_fd.c	\
	ft_putendl_fd.c	\
	ft_putnbr_fd.c	\

BONUS =	ft_lstnew_bonus.c	\
	ft_lstadd_front_bonus.c	\
	ft_lstsize_bonus.c	\
	ft_lstlast_bonus.c	\
	ft_lstadd_back_bonus.c	\
	ft_lstdelone_bonus.c	\
	ft_lstclear_bonus.c	\
	ft_lstiter_bonus.c	\
	ft_lstmap_bonus.c	\

OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS:.c=.o)

CC = gcc

NAME = libft.a

CFLAGS =	-Wall -Wextra -Werror

all :	$(NAME)

$(NAME) : $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean :
		rm -f $(OBJ) $(BONUS_OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean $(NAME)

bonus : $(OBJ) $(BONUS_OBJ)
		ar rc $(NAME) $(OBJ) $(BONUS_OBJ)
		ranlib $(NAME)

.PHONY: all clean fclean re
