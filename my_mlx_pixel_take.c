#include "cub.h"

unsigned int	my_mlx_pixel_take(t_data *data, int x, int y)
{
	char			*addr;
	unsigned int	color;

	addr = data->addr + (y * data->line_size + x * (data->bpp / 8));
	color = *(unsigned int *)addr;
	return (color);
}
