NAME = minitalk.a

SRC_SERVER = server.c
SRC_CLIENT = client.c \

OBJ_SERVER = ${SRC_SERVER:.c=.o}
OBJ_CLIENT = ${SRC_CLIENT:.c=.o}

RM = rm -f
CFLAGS = -Wall -Wextra -Werror
MAKE = make -C
LIBFT_PATH = libft/libft.a

all:    ${NAME}

$(NAME):    ${OBJ_SERVER} ${OBJ_CLIENT}
			${MAKE} libft
			cp ${LIBFT_PATH} ${NAME}
			ar rcs ${NAME} ${OBJ_SERVER} ${OBJ_CLIENT}
			cc ${CFLAGS} ${OBJ_SERVER} ${NAME} -o server
			cc ${CFLAGS} ${OBJ_CLIENT} ${NAME} -o client

server: ${OBJ_SERVER}
	${MAKE} libft
	cp ${LIBFT_PATH} ${NAME}
	ar rcs ${NAME} ${OBJ_SERVER}
	cc ${CFLAGS} ${OBJ_SERVER} ${NAME} -o server

client: ${OBJ_CLIENT}
	${MAKE} libft
	cp ${LIBFT_PATH} ${NAME}
	ar rcs ${NAME} ${OBJ_CLIENT}
	cc ${CFLAGS} ${OBJ_CLIENT} ${NAME} -o client


clean:	
		${MAKE} libft clean
		${RM} ${OBJ_SERVER} ${OBJ_CLIENT}

fclean: clean
		${MAKE} libft fclean
		${RM} ${NAME} server client

re:     fclean all

.PHONY: all clean fclean re

.SILENT: