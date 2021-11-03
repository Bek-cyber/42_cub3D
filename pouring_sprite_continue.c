#include "cub.h"

void	ft_pouring_sprite_continue(t_base *base, int i)
{
	if (base->var->draw_start_y < 0)
		base->var->draw_start_y = 0;
	base->var->draw_end_y = base->var->sprite_hei / 2 + base->scene->hei / 2;
	if (base->var->draw_end_y >= base->scene->hei)
		base->var->draw_end_y = base->scene->hei - 1;
	base->var->sprite_width = abs((int)(base->scene->hei
				/ base->var->transform_y * base->var->asp_ratio));
	base->var->draw_start_x = -base->var->sprite_width
		/ 2 + base->var->sprite_screen_x;
	if (base->var->draw_start_x < 0)
		base->var->draw_start_x = 0;
	base->var->draw_end_x = base->var->sprite_width
		/ 2 + base->var->sprite_screen_x;
	if (base->var->draw_end_x >= base->scene->wid)
		base->var->draw_end_x = base->scene->wid - 1;
}
