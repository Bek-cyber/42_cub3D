#include "cub.h"

void	ft_dda(t_base base, int x)
{
	while (base.var->hit == 0)
	{
		if (base.var->side_dist_x < base.var->side_dist_y)
		{
			base.var->side_dist_x += base.var->delta_dist_x;
			base.var->map_x += base.var->step_x;
			base.var->side = 0;
		}
		else
		{
			base.var->side_dist_y += base.var->delta_dist_y;
			base.var->map_y += base.var->step_y;
			base.var->side = 1;
		}
		if (base.scene->map[base.var->map_x][base.var->map_y] == '1')
			base.var->hit = 1;
	}
}
