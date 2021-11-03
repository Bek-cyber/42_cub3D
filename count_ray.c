#include "cub.h"

void	ft_count_ray(t_base base, int x)
{
	double	camera_x;

	camera_x = 2 * x / (double)base.scene->wid - 1;
	base.var->ray_dir_x = base.var->dir_x + base.var->plane_x * camera_x;
	base.var->ray_dir_y = base.var->dir_y + base.var->plane_y * camera_x;
	base.var->map_x = (int)base.var->pos_x;
	base.var->map_y = (int)base.var->pos_y;
	base.var->delta_dist_x = sqrt(1 + (base.var->ray_dir_y
				* base.var->ray_dir_y) / (base.var->ray_dir_x
				* base.var->ray_dir_x));
	base.var->delta_dist_y = sqrt(1 + (base.var->ray_dir_x
				* base.var->ray_dir_x) / (base.var->ray_dir_y
				* base.var->ray_dir_y));
	base.var->hit = 0;
}
