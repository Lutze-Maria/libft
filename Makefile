# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lschawer <lschawer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/23 08:39:44 by lschawer          #+#    #+#              #
#    Updated: 2026/04/26 12:57:31 by lschawer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# 1. Variables
NAME        = libft.a
CC          = cc
CFLAGS      = -Wall -Wextra -Werror
AR          = ar rcs
RM          = rm -f

# 2. Source Files
SRCS        = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
              ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
              ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
              ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
              ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
              ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
              ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
              ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
              ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
              ft_lstnew.c  ft_lstadd_front.c ft_lstsize.c \
              ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
              ft_lstclear.c ft_lstiter.c ft_lstmap.c

# 3. Object Files
# This pattern substitution replaces the .c extension with .o
OBJS        = $(SRCS:.c=.o)

# 4. Mandatory Rules
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# This rule explains how to compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

# 5. Phony Targets
# This prevents make from confusing these rules with files of the same name
.PHONY: all clean fclean re