# CC = cc
# NAME = push_swap
# CFLAGS = -Wall -Wextra -Werror
# LIBFT = libft/
# FTPRINTF = ft__printf/
# SRC = push_swap.c rotate.c push.c reverse.c stack_utils.c swap.c utils.c
# LINK = -L ./libft -lft -L ./ft__printf -lftprintf

# OBJ = $(SRC:.c=.o)
# all: ${NAME}
# ${NAME}: ${OBJ}
# 	@make -sC ${LIBFT}
# 	@make -sC ${FTPRINT}
# 	@${CC} ${CFLAGS} -o ${NAME} ${OBJ} ${LINK}
# clean :
# 	rm -f ${OBJ}
# 	@cd ${LIBFT} && ${MAKE} clean
# 	@cd ${FTPRINTF} && ${MAKE} clean
# fclean : clean
# 	rm -f ${NAME}
# 	@cd ${LIBFT} && ${MAKE} fclean
# 	@cd ${FTPRINTF} && ${MAKE} fclean
# re: fclean all
# .PHONY: all clean fclean re

CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFTDIR = libft/
PRINTFDIR = ft__printf/
NAME = push_swap
SRC = push_swap.c rotate.c push.c reverse.c stack_utils.c swap.c utils.c
INCLUDE = -L ./libft -lft -L ./ft__printf -lftprintf
OBJS = ${SRC:.c=.o}
all: ${NAME}
${NAME}: ${OBJS}
	@make -sC ${LIBFTDIR}
	@make -sC ${PRINTFDIR}
	@${CC} ${CFLAGS} -o ${NAME} ${OBJS} ${INCLUDE}
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