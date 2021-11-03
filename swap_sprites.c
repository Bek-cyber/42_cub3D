#include "cub.h"

void	ft_swap_sprites(t_sprite *sprite1, t_sprite *sprite2)
{
	ft_swap(&sprite1->x, &sprite2->x);
	ft_swap(&sprite1->y, &sprite2->y);
	ft_swap(&sprite1->dist, &sprite2->dist);
}
