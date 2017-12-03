#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/19 15:34:13 by vpalyvod          #+#    #+#              #
#    Updated: 2017/10/19 15:34:14 by vpalyvod         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fractol
SRC = main.c \
atoi.c \
calculate_coordinates.c \
fract_julia.c \
fract_ship.c \
fract_mondelbrot.c \
exit_hooks.c \
zoom_map.c \
dynamic.c \
invalid_input_cases.c \
fract_matrix.c \
fract_dope.c \
fract_batman.c \
fract_infinity.c \
fract_heart.c \
fract_spiner.c \
color_making.c

OBJ        = $(SRC:.c=.o)

CFLAGS    = -Wall -Wextra

$(NAME): $(OBJ)
	@gcc $(OBJ) -o $(NAME) -lmlx -framework OpenGL -framework AppKit

all: $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME) $(OBJ)

re:	fclean $(NAME)
