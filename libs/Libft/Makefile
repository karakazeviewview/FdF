NAME			=	libft.a
CFLAGS			=	-Wall -Wextra -Werror -I$(INC)

SRCS			=	ft_isdigit.c \
					ft_isspace.c \
					ft_toupper.c \
					ft_bzero.c \
					ft_memset.c \
					ft_strlcpy.c \
					ft_strlen.c \
					ft_strchr.c \
					ft_strrchr.c \
					ft_strtrim.c \
					ft_strdup.c \
					ft_substr.c \
					ft_split.c \
					ft_strncmp.c

OBJS			=	$(SRCS:.c=.o)
INC				=	../../include

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus
