#include "cub.h"

void 	ft_player_helper(t_base *base, char c)
{
	if (c == 'S')
	{
		base->var->dir_x = 1;
		base->var->dir_y = 0;
		base->var->plane_x = 0;
		base->var->plane_y = -0.6;
	}
	if (c == 'W')
	{
		base->var->dir_x = 0;
		base->var->dir_y = -1;
		base->var->plane_x = -0.6;
		base->var->plane_y = 0;
	}
	if (c == 'E')
	{
		base->var->dir_x = 0;
		base->var->dir_y = 1;
		base->var->plane_x = 0.6;
		base->var->plane_y = 0;
	}
}

void	ft_push_player(t_base *base, int y, int x)
{
	char	c;

	c = base->scene->map[y][x];
	base->var->pos_x = (float)y + 0.5;
	base->var->pos_y = (float)x + 0.5;
	base->flags->pl += 1;
	base->scene->map[y][x] = '0';
	if (c == 'N')
	{
		base->var->dir_x = -1;
		base->var->dir_y = 0;
		base->var->plane_x = 0;
		base->var->plane_y = 0.6;
	}
	ft_player_helper(base, c);
}
