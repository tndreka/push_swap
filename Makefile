NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
SRC = push_swap.c
OBJ = $(SRC:.c=.o)

all: ${NAME}

${NAME}: ${OBJ}
	cc $(OBJ) $(FT_PRINTF) -o $(NAME) $(CFLAGS)

%.o: %.cc
	cc -c -o $< -o $@ ${CFLAGS}

clean :
	rm -f ${OBJ}
	rm -f ${NAME}

fclean : clean
	rm-f ${NAME}

re: fclean all

.PHONY: all, clean, fclean, re