CC := "gcc"
FLAGS := "-Wall -Wextra -Werror"

SRCS = ${wildcard *.c}
OBJS = ${SRCS:.c=.o}
NAME = "libft"

.c.o:
	${CC} ${C_FLAGS} -c $< -o ${<:.c=.o}

all: $(NAME)

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

clean:
	find "." -name "*.o" -print -delete

fclean:
	@echo ok

re:
	@echo ok

.PHONY: all, clean, fclean, re