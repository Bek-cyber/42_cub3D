#include "cub.h"

void	ft_begin_drawing(t_base base)
{
	base.var->z_buffer = malloc(sizeof(double) * base.scene->wid);
	if (!base.var->z_buffer)
		ft_error_close(ERROR_11);
	base.mlx->mlx = mlx_init();
	if (!base.mlx->mlx)
		ft_error_close(ERROR_12);
	ft_begin_do_mlx(&base);
	if (base.flags->screenshot == 1)
	{
		ft_output(base);
		ft_output_for_sprites(base);
		ft_make_screenshot(base);
	}
	else
	{
		ft_output(base);
		ft_output_for_sprites(base);
		mlx_put_image_to_window(base.mlx->mlx, base.mlx->win,
			base.data->img, 0, 0);
		mlx_hook(base.mlx->win, 2, 1L << 0, ft_hooks, &base);
		mlx_hook(base.mlx->win, 17, 1L << 0, ft_close_function, 0);
		mlx_loop(base.mlx->mlx);
	}
}
