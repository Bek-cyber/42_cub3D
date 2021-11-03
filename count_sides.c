#include "cub.h"

void	ft_count_sides(t_base base, int x)
{
	if (base.var->side == 0)
		base.var->perp_wall_dist = ((base.var->map_x - base.var->pos_x
					+ (1 - base.var->step_x) / 2) / base.var->ray_dir_x);
	else
		base.var->perp_wall_dist = (base.var->map_y - base.var->pos_y
				+ (1 - base.var->step_y) / 2) / base.var->ray_dir_y;
	base.var->z_buffer[x] = base.var->perp_wall_dist;
	base.var->asp_ratio = 0.75 * base.scene->wid / base.scene->hei;
	base.var->line_height = (int)(base.scene->hei
			/ base.var->perp_wall_dist * base.var->asp_ratio);
	base.var->draw_start = -base.var->line_height / 2 + base.scene->hei / 2;
	if (base.var->draw_start < 0)
		base.var->draw_start = 0;
	base.var->draw_end = base.var->line_height / 2 + base.scene->hei / 2;
	if (base.var->draw_end >= base.scene->hei)
		base.var->draw_end = base.scene->hei - 1;
}
