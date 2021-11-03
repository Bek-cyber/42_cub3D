#include "cub.h"

void 	ft_all_mlx_helper(t_base *base)
{
	int	width;
	int	height;

	if (!base->tex_no_img->img)
		ft_error_close(ERROR_1);
	base->tex_no_img->addr = mlx_get_data_addr(base->tex_no_img->img,
			&base->tex_no_img->bpp, &base->tex_no_img->line_size,
			&base->tex_no_img->endian);
	base->tex_so_img->img = mlx_xpm_file_to_image(base->mlx->mlx,
			base->scene->tex_so_file, &width, &height);
	if (!base->tex_so_img->img)
		ft_error_close(ERROR_1);
	base->tex_so_img->addr = mlx_get_data_addr(base->tex_so_img->img,
			&base->tex_so_img->bpp, &base->tex_so_img->line_size,
			&base->tex_so_img->endian);
}

void	ft_begin_do_mlx(t_base *base)
{
	int	width;
	int	height;

	base->mlx->win = mlx_new_window(base->mlx->mlx, base->scene->wid,
			base->scene->hei, "cub3D");
	base->data->img = mlx_new_image(base->mlx->mlx, base->scene->wid,
			base->scene->hei);
	if (!base->data->img)
		ft_error_close(ERROR_1);
	base->data->addr = mlx_get_data_addr(base->data->img, &base->data->bpp,
			&base->data->line_size, &base->data->endian);
	base->tex_no_img->img = mlx_xpm_file_to_image(base->mlx->mlx,
			base->scene->tex_no_file, &width, &height);
	ft_all_mlx_helper(base);
	ft_continue_do_mlx(base);
}
