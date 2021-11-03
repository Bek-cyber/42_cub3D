#include "cub.h"

void	ft_go_forward_or_back(t_base *base, int keycode)
{
	if (keycode == 13)
	{
		if (base->scene->map[(int)(base->var->pos_x + base->var->dir_x
				* base->var->move_speed)][(int)(base->var->pos_y)] == '0')
			base->var->pos_x += base->var->dir_x * base->var->move_speed;
		if (base->scene->map[(int)(base->var->pos_x)][(int)(base->var->pos_y
				+ base->var->dir_y * base->var->move_speed)] == '0')
			base->var->pos_y += base->var->dir_y * base->var->move_speed;
	}
	if (keycode == 1)
	{
		if (base->scene->map[(int)(base->var->pos_x - base->var->dir_x
				* base->var->move_speed)][(int)(base->var->pos_y)] == '0')
			base->var->pos_x -= base->var->dir_x * base->var->move_speed;
		if (base->scene->map[(int)(base->var->pos_x)][(int)(base->var->pos_y
				- base->var->dir_y * base->var->move_speed)] == '0')
			base->var->pos_y -= base->var->dir_y * base->var->move_speed;
	}
}
