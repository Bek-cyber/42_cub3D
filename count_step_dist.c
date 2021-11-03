#include "cub.h"

void	ft_count_step_dist(t_base base, int x)
{
	if (base.var->ray_dir_x < 0)
	{
		base.var->step_x = -1;
		base.var->side_dist_x = (base.var->pos_x - base.var->map_x)
			* base.var->delta_dist_x;
	}
	else
	{
		base.var->step_x = 1;
		base.var->side_dist_x = (base.var->map_x + 1.0 - base.var->pos_x)
			* base.var->delta_dist_x;
	}
	if (base.var->ray_dir_y < 0)
	{
		base.var->step_y = -1;
		base.var->side_dist_y = (base.var->pos_y - base.var->map_y)
			* base.var->delta_dist_y;
	}
	else
	{
		base.var->step_y = 1;
		base.var->side_dist_y = (base.var->map_y + 1.0 - base.var->pos_y)
			* base.var->delta_dist_y;
	}
}
