#include "cub.h"

void	ft_rejection_of_sprites(t_base base)
{
	int	i;
	int	j;

	i = -1;
	while (++i < base.scene->quantity_spr)
		base.sprite[i].dist = ((base.var->pos_x - base.sprite[i].x)
				* (base.var->pos_x - base.sprite[i].x) + (base.var->pos_y
					- base.sprite[i].y) * (base.var->pos_y - base.sprite[i].y));
	i = 0;
	while (i < base.scene->quantity_spr)
	{
		j = base.scene->quantity_spr - 1;
		while (j > i)
		{
			if (base.sprite[j - 1].dist < base.sprite[j].dist)
				ft_swap_sprites(&base.sprite[j - 1], &base.sprite[j]);
			j--;
		}
		i++;
	}
}
