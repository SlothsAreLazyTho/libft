# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cbijman <cbijman@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/26 13:27:47 by cbijman       #+#    #+#                  #
#    Updated: 2023/11/15 14:50:20 by cbijman       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

# Variables
NAME = libft.a

# Commands
CC = gcc
AR = ar -rcs
RM = rm -rf

# Colours
RESET = \033[0m
GREEN = \033[0;92m
RED = \033[31;01m

# Folders
INCLUDE_DIR = ./include
BIN_DIR = bin
SRC_DIR = src

# Flags
CFLAGS = -Wall -Wextra -Werror
IFLAG = -I$(INCLUDE_DIR)

# Files
SRC =	ft_memset.c	\
		ft_bzero.c	\
		ft_memcpy.c	\
		ft_memmove.c \
		ft_memchr.c	\
		ft_memcmp.c	\
		ft_strlen.c	\
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c	\
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strstr.c \
		ft_strncmp.c \
		ft_strcpy.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isnumber.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_calloc.c	\
		ft_strdup.c	\
		ft_substr.c	\
		ft_strjoin.c \
		ft_strtrim.c \
		ft_striteri.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_printf.c \
		ft_printf_utils.c \
		get_next_line.c \
		ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_realloc.c \
		ft_isspace.c \
		ft_strcmp.c \

OBJS = ${SRC:%.c=$(BIN_DIR)/%.o}

# Operations
all: $(NAME)

$(BIN_DIR)/%.o: $(SRC_DIR)/%.c | $(BIN_DIR)
	@$(CC) $(CFLAGS) $(IFLAG) -o $@ -c $<
	@echo "$(GREEN)Compiling: $(RESET)$(notdir $<)"

$(NAME):	$(OBJS)
			@$(AR) $(NAME) $(OBJS)
			@echo "$(GREEN)Compiling: $(RESET)$(NAME)"
		
$(BIN_DIR):
	@mkdir -p bin

clean:
	$(RM) $(BIN_DIR)
	
fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: bonus all clean fclean re