NAME = libftprintf.a

SRCS = ft_printf.c ft_putnbr_unsigned_base.c ft_putnbr_unsigned_fd.c ft_putsize_t_fd.c 
LIBFTPATH = ./libft



CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:.c=.o}

$(NAME): ${OBJS}
		@$(MAKE) -C $(LIBFTPATH)
		@cp $(LIBFTPATH)/libft.a $(NAME)
		@ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		@${RM} ${OBJS}

fclean:	clean
		@$(MAKE) -C $(LIBFTPATH) fclean
		@${RM} ${NAME}

re:		fclean all


.PHONY: bonus all clean fclean re
