#include "cub.h"

void	ft_output(t_base base)
{
	int	x;
	int	y;

	x = 0;
	while (x < base.scene->wid)
	{
		ft_count_ray(base, x);
		ft_count_step_dist(base, x);
		ft_dda(base, x);
		ft_count_sides(base, x);
		ft_begin_tex(base);
		y = 0;
		while (y < base.scene->hei)
		{
			if (y < base.var->draw_start)
				my_mlx_pixel_put(base.data, x, y, base.scene->ceiling_color);
			if (y > base.var->draw_end)
				my_mlx_pixel_put(base.data, x, y, base.scene->floor_color);
			if (y >= base.var->draw_start && y <= base.var->draw_end)
				ft_texture_no_so(base, x, y);
			y++;
		}
		x++;
	}
}
