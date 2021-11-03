#include "cub.h"

void	ft_init_structures(t_base *base)
{
	base->flags->r = -1;
	base->flags->c = -1;
	base->flags->f = -1;
	base->flags->s = -1;
	base->flags->no = -1;
	base->flags->so = -1;
	base->flags->we = -1;
	base->flags->ea = -1;
	base->flags->pl = -1;
	base->flags->map = -1;
	base->flags->screenshot = 0;
	base->var->move_speed = 0.08;
	base->var->rot_speed = 0.08;
	base->scene->m_hei = 0;
	base->scene->m_wid = 0;
	base->scene->hei = 0;
	base->scene->wid = 0;
}
