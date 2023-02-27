# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmatsuo <mmatsuo@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 02:39:29 by mmatsuo           #+#    #+#              #
#    Updated: 2023/02/28 02:39:33 by mmatsuo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	fdf
CFLAGS	=	-Wall -Wextra -Werror $(INC)

SRCS	=	main/main.c \
			init/init.c \
			parse/get_matrix.c \
			parse/get_color_code.c \
			parse/get_coord.c \
			parse/parse_coord_info.c \
			color/color.c \
			render/draw.c \
			render/render.c \
			render/menu.c \
			key/key_hook.c \
			key/operation_key.c \
			exit/exit.c \
			exit/alloc.c \
			utils/ft_atoi_base.c \
			utils/ft_abs.c \
			utils/ft_max.c \
			utils/ft_min.c \
			utils/check.c

SRCS_PATH	= 	$(addprefix src/, $(SRCS))
OBJS_PATH	=	$(SRCS_PATH:%.c=%.o)
MLX_PATH	=	./libs/minilibx_macos/
INC			=	-I./include/ -I$(MLX_PATH)

all:	$(NAME)

$(NAME):	$(OBJS_PATH) $(LIBFT) $(PRINT) $(GNL)
	$(MAKE) -C libs/libft
	$(MAKE) -C libs/ft_print
	$(MAKE) -C libs/gnl
	$(MAKE) -C $(MLX_PATH)
	#$(CC) $(FLAGS) $(OBJS_PATH) $(LIBFT) $(PRINT) $(GNL) -L$(MLX_PATH) -lmlx -framework OpenGL -framework AppKit -o $(NAME)
	#for linux ver

	$(CC) $(FLAGS) $(MLX) $(OBJS_PATH) $(LIBFT) $(PRINT) $(GNL) -L/usr/lib -lXext -lX11 -lm -lz -o $(NAME)
	#for macos ver

LIBFT	=	libs/libft/libft.a
PRINT	=	libs/ft_print/libftprint.a
GNL		=	libs/gnl/libftgnl.a
MLX		=	$(MLX_PATH)/libmlx_darwin.a

clean:
	$(MAKE) -C libs/libft clean
	$(MAKE) -C libs/ft_print clean
	$(MAKE) -C libs/gnl clean
	$(MAKE) -C $(MLX_PATH) clean
	$(RM) $(OBJS_PATH)

fclean:	clean
	$(RM) $(LIBFT)
	$(RM) $(PRINT)
	$(RM) $(GNL)
	$(RM) $(MLX)
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
