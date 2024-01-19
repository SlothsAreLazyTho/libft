# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cbijman <cbijman@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/26 13:27:47 by cbijman       #+#    #+#                  #
#    Updated: 2024/01/19 01:47:39 by root          ########   odam.nl          #
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
INC_DIR = ./include
BIN_DIR = ./bin
SRC_DIR = ./src

# Flags
CFLAGS = -Wall -Wextra -Werror

# Files
FILES	=	ft_memset \
			ft_bzero \
			ft_memcpy \
			ft_memmove \
			ft_memchr \
			ft_memcmp \
			ft_strlen \
			ft_arrlen \
			ft_strlcpy \
			ft_strlcat \
			ft_strchr \
			ft_strrchr \
			ft_strnstr \
			ft_strstr \
			ft_strncmp \
			ft_strcpy \
			ft_atoi \
			ft_isalpha \
			ft_isdigit \
			ft_isnumber \
			ft_isalnum \
			ft_isascii \
			ft_isprint \
			ft_toupper \
			ft_tolower \
			ft_calloc \
			ft_strdup \
			ft_arrdup \
			ft_substr \
			ft_strjoin \
			ft_strtrim \
			ft_striteri \
			ft_split \
			ft_itoa \
			ft_strmapi \
			ft_putchar_fd \
			ft_putstr_fd \
			ft_putendl_fd \
			ft_putnbr_fd \
			ft_printf \
			ft_printf_utils \
			get_next_line \
			ft_lstnew \
			ft_lstadd_front \
			ft_lstsize \
			ft_lstlast \
			ft_lstadd_back \
			ft_lstdelone \
			ft_lstclear \
			ft_lstiter \
			ft_lstmap \
			ft_realloc \
			ft_isspace \
			ft_strcmp \
			ft_string_init \
			ft_string_join \
			ft_string_cstr \
			ft_string_append \
			ft_string_free \
			ft_color \
			ft_color_utils \

HEADER = $(INC_DIR)/libft.h

vpath %.c	$(SRC_DIR) \
			$(SRC_DIR)/list \
			$(SRC_DIR)/stdio \
			$(SRC_DIR)/stdlib \
			$(SRC_DIR)/string \
			$(SRC_DIR)/string/color \
			$(SRC_DIR)/string/builder \
			$(SRC_DIR)/types \

SRC 	= ${addsuffix .c, $(FILES)}
OBJ		= ${patsubst %.c, $(BIN_DIR)/%.o, $(SRC)}

# Operations
all: $(NAME)

$(BIN_DIR)/%.o: %.c | $(BIN_DIR)
	@$(CC) $(CFLAGS) -I$(INC_DIR) -o $@ -c $<
	@echo "$(GREEN)Compiling: $(RESET)$(notdir $<)"

$(NAME): $(OBJ) $(HEADER)
	@$(AR) $(NAME) $(OBJ)
	@echo "$(GREEN)Compiling: $(RESET)$(NAME)"
		
$(BIN_DIR):
	@mkdir -p bin

debug: CFLAGS += -g -fsanitize=address
debug: clean $(NAME)
	@echo "$(RED)Libft is in debug.$(RESET)"

clean:
	$(RM) $(BIN_DIR)
	
fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: bonus all debug clean fclean re