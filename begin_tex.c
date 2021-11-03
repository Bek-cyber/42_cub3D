#include "cub.h"

void	ft_begin_tex(t_base base)
{
	double	wbase_x;

	if (base.var->side == 0)
		wbase_x = base.var->pos_y + base.var->perp_wall_dist
			* base.var->ray_dir_y;
	else
		wbase_x = base.var->pos_x + base.var->perp_wall_dist
			* base.var->ray_dir_x;
	wbase_x -= floor((wbase_x));
	base.var->tex_x = (int)(wbase_x * (double)(64));
	if (base.var->side == 0 && base.var->ray_dir_x > 0)
		base.var->tex_x = 64 - base.var->tex_x - 1;
	if (base.var->side == 1 && base.var->ray_dir_y < 0)
		base.var->tex_x = 64 - base.var->tex_x - 1;
	base.var->step = 1.0 * 64 / base.var->line_height;
	base.var->tex_pos = (base.var->draw_start - base.scene->hei / 2
			+ base.var->line_height / 2) * base.var->step;
}
