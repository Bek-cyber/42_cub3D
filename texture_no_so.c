#include "cub.h"

void	ft_texture_no_so(t_base base, int x, int y)
{
	int	color;

	base.var->tex_y = (int)base.var->tex_pos & (64 - 1);
	base.var->tex_pos += base.var->step;
	if (base.var->side == 0)
	{
		if (base.var->step_x > 0)
		{
			color = my_mlx_pixel_take(base.tex_so_img,
					base.var->tex_x, base.var->tex_y);
			my_mlx_pixel_put(base.data, x, y, color);
		}
		else if (base.var->step_x < 0)
		{
			color = my_mlx_pixel_take(base.tex_no_img,
					base.var->tex_x, base.var->tex_y);
			my_mlx_pixel_put(base.data, x, y, color);
		}
	}
	ft_texture_we_ea(base, x, y);
}
