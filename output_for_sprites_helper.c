#include "cub.h"

void	ft_output_for_sprites_helper(t_base base)
{
	int	y;
	int	color;
	int	d;

	y = base.var->draw_start_y;
	while (y < base.var->draw_end_y)
	{
		d = (y) * 256 - base.scene->hei * 128
			+ base.var->sprite_hei * 128;
		base.var->tex_y = ((d * 64) / base.var->sprite_hei) / 256;
		color = my_mlx_pixel_take(base.sprite_img,
				base.var->tex_x, base.var->tex_y);
		if (color)
			my_mlx_pixel_put(base.data, base.var->stripe, y, color);
		y++;
	}
}
