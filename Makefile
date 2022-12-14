# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cbijman <cbijman@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/26 13:27:47 by cbijman       #+#    #+#                  #
#    Updated: 2022/12/14 18:02:58 by cbijman       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC = gcc
RM = rm -f
AR = ar -rcs
NAME = libft.a
INC_DIR = ./include
CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR)

RESET = \033[0m
GREEN = \033[0;92m

SRCS = 	ft_memset.c	\
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
		ft_strncmp.c \
		ft_strcpy.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
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

SRCS_BONUS = 	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c \


OBJS = ${SRCS:%.c=bin/%.o}
OBJS_BONUS = ${SRCS_BONUS:%.c=bin/%.o}

bin/%.o: src/%.c
	@mkdir -p bin
	@echo "$(GREEN)Compiling: $(RESET)$<"
	@$(CC) $(CFLAGS) -o $@ -c $<

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

bonus:	${OBJS_BONUS}
		$(AR) $(NAME) $(OBJS_BONUS)

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)
	$(RM) -rf bin

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re