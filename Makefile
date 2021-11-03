NAME = cub3D
HEADER = cub.h
CC = gcc
FLAGS = -Wall -Wextra -Werror -g
OPTIONS = -Lmlx -lmlx -framework OpenGL -framework AppKit
SRC =	main.c begin_do_mlx.c continue_do_mlx.c atoi_for_parser.c count_ray.c count_sides.c count_step_dist.c \
        check_around.c check_tail.c check_flags.c check_map.c close_function.c count_virgule.c count_arguments.c \
        begin_drawing.c fill_line.c fill_map.c get_next_line.c hooks.c map_alloc.c go_forward_or_back.c \
        go_right_or_left.c my_mlx_pixel_put.c my_mlx_pixel_take.c oneness.c parse_the_arguments.c parse_color.c parser_for_fc.c \
        parser_for_map.c parser_for_nwse.c parser_for_r.c parser_for_sp.c dda.c push_player.c texture_no_so.c \
        output.c output_for_sprites.c output_for_sprites_helper.c texture_we_ea.c turn_left.c turn_right.c miss_char.c \
        rejection_of_sprites.c pouring_sprite.c pouring_sprite_continue.c push_sprites.c str_chr.c str_cpy.c str_join.c str_len.c \
        str_n_str.c str_trim.c init_structures.c sub_str.c swap.c swap_sprites.c begin_tex.c make_screenshot.c \
        screenshot.c put_pixel_to_file.c malloc_func.c check_ac_av.c error_close.c free.c  check_line.c \

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER) $(LIB_HEADER)
	make -C mlx/
	cp mlx/libmlx.dylib .
	$(CC) $(FLAGS) $(OPTIONS) $(OBJ) -o $(NAME)

/%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -Imlx -c $< -o $@

clean:
	rm -rf $(OBJ)
	make clean -C mlx/

fclean: clean
	rm -rf $(NAME)
	rm -rf mlx/libmlx.dylib
	rm -rf libmlx.dylib

re: fclean all

.PHONY: all clean fclean re