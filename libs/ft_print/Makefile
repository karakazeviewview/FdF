NAME		=	libftprint.a
CFLAGS		=	-Wall -Wextra -Werror -I$(INC)

PRINT		=	ft_print.c \
				init.c \
				scrape.c \
				utils.c \
				output.c

OBJS		=	$(PRINT:.c=.o)
INC			=	../../include

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re bonus
