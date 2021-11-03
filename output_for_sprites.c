#include "cub.h"

void	ft_output_for_sprites(t_base base)
{
	int	i;

	ft_rejection_of_sprites(base);
	i = -1;
	while (++i < base.scene->quantity_spr)
	{
		ft_pouring_sprite(&base, i);
		ft_pouring_sprite_continue(&base, i);
		base.var->stripe = --base.var->draw_start_x;
		while (++base.var->stripe < base.var->draw_end_x)
		{
			base.var->tex_x = (int)(256 * (base.var->stripe
						- (-base.var->sprite_width / 2
							+ base.var->sprite_screen_x))
					* 64 / base.var->sprite_width) / 256;
			if (base.var->transform_y > 0 && base.var->stripe > 0
				&& base.var->stripe < base.scene->wid
				&& base.var->transform_y < base.var->z_buffer[base.var->stripe])
				ft_output_for_sprites_helper(base);
		}
	}
}
