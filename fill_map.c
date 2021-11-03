#include "cub.h"

void	ft_fill_map(t_base *base)
{
	base->i = 0;
	while (base->i < base->scene->m_hei)
	{
		base->j = 0;
		while (base->j < (base->scene->m_wid + 2))
			base->scene->map[base->i][base->j++] = ' ';
		base->i++;
	}
}
