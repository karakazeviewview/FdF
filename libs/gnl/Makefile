************************************************************************* #

NAME		=	libftgnl.a
CFLAGS		=	-Wall -Wextra -Werror -I$(INC)

SRCS		=	get_next_line.c \
				get_next_line_utils.c

OBJS		=	$(SRCS:.c=.o)
INC			=	../../include

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
