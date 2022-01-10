NAME = libftprintf.a

SRCS = ft_printf.c \
	   ft_putchar_fd.c \
	   ft_putnbr_fd.c \
	   ft_putsize_t_fd.c \
	   ft_putstr_fd.c



CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:.c=.o}

$(NAME): ${OBJS}
		@ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		@${RM} ${OBJS}

fclean:	clean
		@${RM} ${NAME}

re:		fclean all


.PHONY: bonus all clean fclean re
