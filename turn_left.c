#include "cub.h"

void	ft_turn_left(t_base base)
{
	base.var->old_dir_x = base.var->dir_x;
	base.var->dir_x = base.var->dir_x * cos(base.var->rot_speed)
		- base.var->dir_y * sin(base.var->rot_speed);
	base.var->dir_y = base.var->old_dir_x * sin(base.var->rot_speed)
		+ base.var->dir_y * cos(base.var->rot_speed);
	base.var->old_plane_x = base.var->plane_x;
	base.var->plane_x = base.var->plane_x * cos(base.var->rot_speed)
		- base.var->plane_y * sin(base.var->rot_speed);
	base.var->plane_y = base.var->old_plane_x * sin(base.var->rot_speed)
		+ base.var->plane_y * cos(base.var->rot_speed);
}
