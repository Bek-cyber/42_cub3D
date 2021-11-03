#ifndef CUB_H
# define CUB_H
# include "mlx/mlx.h"
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <fcntl.h>
# include <unistd.h>

# define ERROR_1 "Something wrong with img"
# define ERROR_2 "Wrong input flag"
# define ERROR_3 "Cannot open file"
# define ERROR_4 "The name of file is wrong"
# define ERROR_5 "Wrong value in map"
# define ERROR_6 "Wrong number of value for R"
# define ERROR_7 "Wrong number of value for Floor or Ceiling"
# define ERROR_8 "Wrong number of value for NO/SO/WE/EA/S"
# define ERROR_9 "Wrong number of value for map"
# define ERROR_10 "Wrong number of value for player"
# define ERROR_11 "Fault in malloc"
# define ERROR_12 "Fault in mlx"
# define ERROR_13 "Fault during reading file"
# define ERROR_14 "Wrong input"
# define ERROR_15 "Error\nFault during parsing"

typedef struct s_mlx
{
	void		*mlx;
	void		*win;
}				t_mlx;

typedef struct s_data
{
	void		*img;
	char		*addr;
	int			bpp;
	int			line_size;
	int			endian;
}				t_data;

typedef struct s_scene
{
	int			wid;
	int			hei;
	int			m_wid;
	int			m_hei;
	int			ceiling_color;
	int			floor_color;
	int			quantity_spr;
	char		*tex_no_file;
	char		*tex_so_file;
	char		*tex_we_file;
	char		*tex_ea_file;
	char		*sprite_file;
	char		**map;
}				t_scene;

typedef struct s_parce
{
	int			r;
	int			c;
	int			f;
	int			s;
	int			no;
	int			so;
	int			we;
	int			ea;
	int			pl;
	int			screenshot;
	int			map;
}				t_parce;

typedef struct s_sprite
{
	double		x;
	double		y;
	double		dist;
}				t_sprite;

typedef struct s_var
{
	int			map_x;
	int			map_y;
	int			side;
	int			hit;
	int			line_height;
	double		delta_dist_x;
	double		delta_dist_y;
	double		side_dist_x;
	double		side_dist_y;
	double		ray_dir_x;
	double		ray_dir_y;
	double		pos_x;
	double		pos_y;
	double		perp_wall_dist;
	double		dir_x;
	double		dir_y;
	double		step_x;
	double		step_y;
	double		draw_start;
	double		draw_end;
	double		plane_x;
	double		plane_y;
	double		old_dir_x;
	double		old_plane_x;
	double		move_speed;
	double		rot_speed;
	int			tex_x;
	int			tex_y;
	double		tex_pos;
	double		step;
	double		asp_ratio;
	double		*z_buffer;
	double		transform_x;
	double		transform_y;
	double		sprite_x;
	double		sprite_y;
	double		inv_det;
	int			sprite_screen_x;
	int			sprite_hei;
	int			sprite_width;
	int			draw_start_y;
	int			draw_start_x;
	int			draw_end_y;
	int			draw_end_x;
	int			stripe;
}				t_var;

typedef struct s_base
{
	t_data		*data;
	t_data		*tex_no_img;
	t_data		*tex_so_img;
	t_data		*tex_we_img;
	t_data		*tex_ea_img;
	t_data		*sprite_img;
	t_mlx		*mlx;
	t_scene		*scene;
	t_var		*var;
	t_sprite	*sprite;
	t_parce		*flags;
	int			i;
	int			j;
}				t_base;

int				main(int ac, char **av);
////////////////////////////////////////
int				get_next_line(int fd, char **line);
int				ft_fill_line(char *str, char *mas, char **line);
int				ft_str_len(char *str);
size_t			ft_str_cpy(char *dst, char *src);
char			*ft_str_join(char *s1, char *s2);
char			*ft_str_chr(char *s, int c);
int				ft_atoi_for_parser(char **str);
char			*ft_sub_str(char *s, int start, size_t len);
char			*ft_str_trim(char *s1, char *set);
char			*ft_str_n_str(char *haystack, char *needle, size_t len);
void			ft_swap(double *a, double *b);
////////////////////////////////////////////////
int				ft_count_virgule(char *str);
void			ft_miss_char(char **str, char c);
int				ft_count_arguments(char *s);
int				ft_check_tail(char *name, char *ext);
int				ft_parse_color(char *line);
int				ft_oneness(char *s1, char *s2);
int				ft_map_alloc(t_base *base);
void			ft_fill_map(t_base *base);
void			ft_error_close(char *str);
int				ft_close_function(void);
/////////////////////////////////////////////////
void			ft_parser_for_r(t_base *base, char *line);
void			ft_parser_for_nwse(t_base *base, char *line);
void			ft_parser_for_sp(t_base *base, char *line);
void			ft_parser_for_fc(t_base *base, char *line);
void			ft_parser_for_map(t_base *base, char **av);
void			ft_check_flags(t_base *base);
void			ft_check_map(t_base *base);
void			ft_check_around(t_base *base, int x, int y);
void			ft_push_player(t_base *base, int x, int y);
void			ft_push_sprites(t_base *base);
void			ft_begin_do_mlx(t_base *base);
void			ft_continue_do_mlx(t_base *base);
int				ft_hooks(int keycode, t_base *base);
void			ft_go_forward_or_back(t_base *base, int keycode);
void			ft_go_right_or_left(t_base *base, int keycode);
void			ft_turn_left(t_base base);
void			ft_turn_right(t_base base);
unsigned int	my_mlx_pixel_take(t_data *data, int x, int y);
void			my_mlx_pixel_put(t_data *data, int x, int y, int color);
void			ft_texture_we_ea(t_base base, int x, int y);
void			ft_texture_no_so(t_base base, int x, int y);
void			ft_output(t_base base);
void			ft_count_ray(t_base base, int x);
void			ft_count_step_dist(t_base base, int x);
void			ft_dda(t_base base, int x);
void			ft_begin_tex(t_base base);
void			ft_count_sides(t_base base, int x);
void			ft_output_for_sprites(t_base base);
void			ft_output_for_sprites_helper(t_base base);
void			ft_pouring_sprite_continue(t_base *base, int i);
void			ft_pouring_sprite(t_base *base, int i);
void			ft_rejection_of_sprites(t_base base);
void			ft_swap_sprites(t_sprite *sprite1, t_sprite *sprite2);
void			ft_begin_drawing(t_base base);
void			ft_parse_the_arguments(t_base *base, char **av);
void			ft_init_structures(t_base *base);
void			ft_make_screenshot(t_base base);
void			ft_screenshot(t_base base, int fd);
void			ft_put_pixel_to_file(int fd, t_base base);
void			ft_malloc_func(t_base *base);
void			ft_check_ac_av(int ac, char **av, t_base *base);
void			ft_free(char *line);
int				ft_check_line(t_base *base, char *line);

#endif
