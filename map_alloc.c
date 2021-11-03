#include "cub.h"

int	ft_map_alloc(t_base *base)
{
	base->scene->map = (char **)malloc(sizeof(char *)
			* base->scene->m_hei + 1);
	if (!(base->scene->map))
		return (0);
	base->scene->map[base->scene->m_hei] = NULL;
	base->i = 0;
	while (base->i < (base->scene->m_hei + 1))
	{
		base->scene->map[base->i] = (char *)malloc(base->scene->m_wid + 3);
		if (!(base->scene->map[base->i]))
			return (0);
		base->scene->map[base->i++][base->scene->m_wid + 2] = '\0';
	}
	return (1);
}
