NAME = libftprintf.a

SRCS = ft_printf.c ft_putnbr_unsigned_base.c ft_putnbr_unsigned_fd.c ft_putsize_t_fd.c 

LIBFT = /Users/trerolle/Desktop/libft/libft.a

OBJS = ${SRCS:.c=.o}


CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		make --silent -C ${LIBFT}
		ar rcs ${NAME} ${OBJS} ${LIBFT}

all:	${NAME}

clean:
		${RM} ${OBJS} ${OBJSBONUS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all


.PHONY: bonus all clean fclean re
