#include "cub.h"

void	ft_push_sprites(t_base *base)
{
	int		k;
	char	c;

	k = 0;
	base->i = 0;
	base->sprite = malloc(sizeof(t_sprite) * base->scene->quantity_spr);
	if (!(base->sprite))
		ft_error_close(ERROR_11);
	while (base->i < base->scene->m_hei)
	{
		base->j = 0;
		while (base->scene->map[base->i][base->j])
		{
			c = base->scene->map[base->i][base->j];
			if (c == '2')
			{
				base->sprite[k].x = (double)base->i + 0.5;
				base->sprite[k].y = (double)base->j + 0.5;
				k++;
			}
			base->j++;
		}
		base->i++;
	}
}
