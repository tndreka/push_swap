NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
SRC = push_swap.c rotate.c push.c reverse.c stack_utils.c swap.c
OBJ = $(SRC:.c=.o)

all: ${NAME}

${NAME}: ${OBJ}
	cc $(OBJ) -o $(NAME) $(CFLAGS)

%.o: %.cc
	cc -c -o $< -o $@ ${CFLAGS}

clean :
	rm -f ${OBJ}
	rm -f ${NAME}

fclean : clean
	rm-f ${NAME}

re: fclean all

.PHONY: all, clean, fclean, re