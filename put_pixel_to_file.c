#include "cub.h"

void	ft_put_pixel_to_file(int fd, t_base base)
{
	int	i;
	int	j;
	int	color;

	i = base.scene->hei;
	while (--i >= 0)
	{
		j = -1;
		while (++j < base.scene->wid)
		{
			color = *(int *)(base.data->addr + (i * base.data->line_size
						+ j * (base.data->bpp / 8)));
			write(fd, &color, 4);
		}
	}
}
