# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 00:32:57 by orekabe           #+#    #+#              #
#    Updated: 2025/12/13 23:22:09 by orekabe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

HEADER = -I./include

SRCD = ./src

OBJD = ./objs

SRC = $(SRCD)/ft_atoi.c $(SRCD)/ft_bzero.c $(SRCD)/ft_calloc.c $(SRCD)/ft_isalnum.c $(SRCD)/ft_isalpha.c $(SRCD)/ft_isascii.c $(SRCD)/ft_isdigit.c \
	  $(SRCD)/ft_isprint.c $(SRCD)/ft_itoa.c $(SRCD)/ft_memchr.c $(SRCD)/ft_memcmp.c $(SRCD)/ft_memcpy.c $(SRCD)/ft_memmove.c $(SRCD)/ft_memset.c \
	  $(SRCD)/ft_split.c $(SRCD)/ft_strchr.c $(SRCD)/ft_strdup.c $(SRCD)/ft_strlen.c $(SRCD)/ft_striteri.c $(SRCD)/ft_strjoin.c $(SRCD)/ft_strlcat.c \
	  $(SRCD)/ft_strlcpy.c $(SRCD)/ft_substr.c $(SRCD)/ft_strncmp.c $(SRCD)/ft_strnstr.c $(SRCD)/ft_strrchr.c $(SRCD)/ft_strtrim.c $(SRCD)/ft_tolower.c \
	  $(SRCD)/ft_toupper.c $(SRCD)/ft_putchar_fd.c $(SRCD)/ft_putendl_fd.c $(SRCD)/ft_putnbr_fd.c $(SRCD)/ft_putstr_fd.c $(SRCD)/ft_strmapi.c

BSRC = $(SRCD)/ft_lstlast.c $(SRCD)/ft_lstmap.c $(SRCD)/ft_lstnew.c $(SRCD)/ft_lstsize.c \
	   $(SRCD)/ft_lstadd_back.c $(SRCD)/ft_lstadd_front.c $(SRCD)/ft_lstclear.c $(SRCD)/ft_lstdelone.c $(SRCD)/ft_lstiter.c

OBJ = $(addprefix $(OBJD)/, $(notdir $(SRC:.c=.o)))

BOBJ = $(addprefix $(OBJD)/, $(notdir $(BSRC:.c=.o)))

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rc $(NAME) $(OBJ)

bonus: all $(BOBJ)
	@ar -rc $(NAME) $(BOBJ)

$(OBJD)/%.o: $(SRCD)/%.c
	@mkdir -p $(OBJD)
	@printf "                                               \r"
	@printf "Compiling $<\r"
	@$(CC) -c $(CFLAGS) $(HEADER) $< -o $@

clean:
	rm -rf $(OBJD)

fclean: clean
	rm -f $(NAME)

re: fclean all
