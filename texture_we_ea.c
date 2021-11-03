#include "cub.h"

void	ft_texture_we_ea(t_base base, int x, int y)
{
	int	color;

	if (base.var->side == 1)
	{
		if (base.var->step_y > 0)
		{
			color = my_mlx_pixel_take(base.tex_ea_img,
					base.var->tex_x, base.var->tex_y);
			my_mlx_pixel_put(base.data, x, y, color);
		}
		else if (base.var->step_y < 0)
		{
			color = my_mlx_pixel_take(base.tex_we_img,
					base.var->tex_x, base.var->tex_y);
			my_mlx_pixel_put(base.data, x, y, color);
		}
	}
}
