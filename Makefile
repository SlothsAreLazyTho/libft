CC := "gcc"
RM := "rm -f"
FLAGS := "-Wall -Wextra -Werror"

NAME = "libft.a"
HEADERFILES = libft.h

SRCS = ${*.c}
OBJS = ${SRCS:.c=.o}

all: $(NAME)

.c.o: $(SRCS) $(HEADERFILES)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME):	${OBJS}
			ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:
	@echo ko

re:
	@echo ok

.PHONY: all, clean, fclean, re