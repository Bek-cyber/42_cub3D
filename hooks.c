#include "cub.h"

int	ft_hooks(int keycode, t_base *base)
{
	if (keycode == 53)
		exit(0);
	mlx_destroy_image(base->mlx->mlx, base->data->img);
	if (keycode == 13 || keycode == 1)
		ft_go_forward_or_back(base, keycode);
	if (keycode == 2 || keycode == 0)
		ft_go_right_or_left(base, keycode);
	if (keycode == 123)
		ft_turn_left(*base);
	if (keycode == 124)
		ft_turn_right(*base);
	base->data->img = mlx_new_image(base->mlx->mlx,
			base->scene->wid, base->scene->hei);
	base->data->addr = mlx_get_data_addr(base->data->img,
			&base->data->bpp, &base->data->line_size, &base->data->endian);
	ft_output(*base);
	ft_output_for_sprites(*base);
	mlx_put_image_to_window(base->mlx->mlx,
		base->mlx->win, base->data->img, 0, 0);
	return (0);
}
