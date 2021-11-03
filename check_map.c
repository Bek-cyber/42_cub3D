#include "cub.h"

void 	ft_check_map_helper(t_base *base)
{
	if (!base->scene->map[base->i + 1])
	{
		if (ft_oneness(base->scene->map[base->i], " 1")
			|| !(ft_str_chr(base->scene->map[base->i], '1')))
			ft_error_close(ERROR_5);
	}
	ft_push_sprites(base);
}

void	ft_check_map(t_base *base)
{
	char	c;

	base->i = 0;
	base->flags->map++;
	while (base->i < (base->scene->m_hei - 1))
	{
		if (ft_oneness(base->scene->map[base->i], " 012NSWE"))
			ft_error_close(ERROR_5);
		base->j = 1;
		while (base->scene->map[base->i][base->j])
		{
			c = base->scene->map[base->i][base->j];
			if (c == 'N' || c == 'S' || c == 'W' || c == 'E')
				ft_push_player(base, base->i, base->j);
			if (c == '0' || c == '2' || c == 'N'
				|| c == 'S' || c == 'W' || c == 'E')
				ft_check_around(base, base->i, base->j);
			if (c == '2')
				base->scene->quantity_spr++;
			base->j++;
		}
		base->i++;
	}
	ft_check_map_helper(base);
	ft_check_flags(base);
}
