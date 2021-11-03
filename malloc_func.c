#include "cub.h"

void	ft_malloc_func(t_base *base)
{
	base->tex_no_img = malloc(sizeof(t_data));
	base->tex_so_img = malloc(sizeof(t_data));
	base->tex_we_img = malloc(sizeof(t_data));
	base->tex_ea_img = malloc(sizeof(t_data));
	base->sprite_img = malloc(sizeof(t_data));
	base->scene = malloc(sizeof(t_scene));
	base->var = malloc(sizeof(t_var));
	base->flags = malloc(sizeof(t_parce));
}
