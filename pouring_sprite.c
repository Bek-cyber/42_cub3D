#include "cub.h"

void	ft_pouring_sprite(t_base *base, int i)
{
	base->var->sprite_x = base->sprite[i].x - base->var->pos_x;
	base->var->sprite_y = base->sprite[i].y - base->var->pos_y;
	base->var->inv_det = 1.0 / (base->var->plane_x * base->var->dir_y
			- base->var->dir_x * base->var->plane_y);
	base->var->transform_x = base->var->inv_det * (base->var->dir_y
			* base->var->sprite_x - base->var->dir_x * base->var->sprite_y);
	base->var->transform_y = base->var->inv_det * (-base->var->plane_y
			* base->var->sprite_x + base->var->plane_x
			* base->var->sprite_y);
	base->var->sprite_screen_x = (int)((base->scene->wid / 2)
			* (1 + base->var->transform_x / base->var->transform_y));
	base->var->sprite_hei = abs((int)(base->scene->hei / base->var->transform_y
				* base->var->asp_ratio));
	base->var->draw_start_y = -base->var->sprite_hei / 2 + base->scene->hei / 2;
}
