# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/04 19:44:00 by wrickard          #+#    #+#              #
#    Updated: 2021/08/04 19:44:00 by wrickard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAGS = -Wall -Werror -Wextra

SOURCES_LIST = ft_memset.c\
	ft_bzero.c\
	ft_calloc.c\
	ft_memcpy.c\
	ft_memccpy.c\
	ft_memmove.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_strlen.c\
	ft_strdup.c\
	ft_strlcat.c\
	ft_strlcpy.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strnstr.c\
	ft_strncmp.c\
	ft_atoi.c\
	ft_isalpha.c\
	ft_isdigit.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_strmapi.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_split.c\
	ft_itoa.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	ft_toupper.c\
	ft_tolower.c\

SOURCES_LIST_B = ft_lstnew.c\
	ft_lstadd_front.c\
	ft_lstsize.c\
	ft_lstlast.c\
	ft_lstadd_back.c\
	ft_lstclear.c\
	ft_lstdelone.c\
	ft_lstiter.c\
	ft_lstmap.c\

OBJECTS = $(patsubst %.c, %.o, $(SOURCES_LIST))
OBJECTS_B = $(patsubst %.c, %.o, $(SOURCES_LIST_B))


D_FILES = $(patsubst %.c, %.d, $(SOURCES_LIST) $(SOURCES_LIST_B))

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rcs $(NAME) $?
	@echo "libft.a is ready to use"

%.o : %.c
	@$(CC) $(FLAGS) -c $< -o $@ -MD

include $(wildcard $(D_FILES))

bonus: $(OBJECTS_B)
	@ar rcs $(NAME) $?
	@echo "Libft Bonus Done!"

clean:
	@rm -f $(OBJECTS_B) $(OBJECTS) $(D_FILES)
	@echo "Annihilation success"

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY : re all fclean clean bonus
