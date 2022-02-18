# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 00:32:57 by orekabe           #+#    #+#              #
#    Updated: 2021/12/22 02:51:41 by orekabe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

HEADER = libft.h

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	  ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
	  ft_split.c ft_strchr.c ft_strdup.c ft_strlen.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
	  ft_strlcpy.c ft_substr.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_tolower.c \
	  ft_toupper.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strmapi.c

BSRC = ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c \
	   ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c

OBJ = $(SRC:.c=.o)

BOBJ = $(BSRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rc $(NAME) $(OBJ)
	@echo "██╗     ██╗██████╗ ███████╗████████╗"
	@echo "██║     ██║██╔══██╗██╔════╝╚══██╔══╝"
	@echo "██║     ██║██████╔╝█████╗     ██║   "
	@echo "██║     ██║██╔══██╗██╔══╝     ██║   "
	@echo "███████╗██║██████╔╝██║        ██║   "
	@echo "╚══════╝╚═╝╚═════╝ ╚═╝        ╚═╝   "

bonus: all $(BOBJ)
	ar -rc $(NAME) $(BOBJ)

%.o: %.c $(HEADER)
	@$(CC) -c $(CFLAGS) $<

clean:
	rm -rf $(OBJ) $(BOBJ)

fclean: clean
	rm -rf $(NAME) $(BOBJ)

re: fclean all 