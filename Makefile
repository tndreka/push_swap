CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFTDIR = libft_p/
PRINTFDIR = ft__printf_p/
NAME = push_swap
SRC = push_swap_main.c rotate.c push.c reverse.c stack_utils.c swap.c utils.c sort_3.c stack_init.c \
		 sort_utils.c stack_check.c fullsort.c fullsort_utils.c
INCLUDE = -L ./libft_p -lft -L ./ft__printf_p -lftprintf
OBJS = ${SRC:.c=.o}
all: ${NAME}
${NAME}: ${OBJS}
	@make -sC ${LIBFTDIR}
	@make -sC ${PRINTFDIR}
	@${CC} ${CFLAGS} -o ${NAME} ${OBJS} ${INCLUDE} -g
clean:
	@rm -f ${OBJS}
	@cd ${LIBFTDIR} && ${MAKE} clean
	@cd ${PRINTFDIR} && ${MAKE} clean
fclean:
	${MAKE} clean
	@rm -f ${NAME}
	@cd ${LIBFTDIR} && ${MAKE} fclean
	@cd ${PRINTFDIR} && ${MAKE} fclean
re: fclean all
.PHONY: all clean fclean re