#include "cub.h"

void	ft_continue_do_mlx(t_base *base)
{
	int	width;
	int	height;

	base->tex_we_img->img = mlx_xpm_file_to_image(base->mlx->mlx,
			base->scene->tex_we_file, &width, &height);
	if (!base->tex_we_img->img)
		ft_error_close(ERROR_1);
	base->tex_we_img->addr = mlx_get_data_addr(base->tex_we_img->img,
			&base->tex_we_img->bpp, &base->tex_we_img->line_size,
			&base->tex_we_img->endian);
	base->tex_ea_img->img = mlx_xpm_file_to_image(base->mlx->mlx,
			base->scene->tex_ea_file, &width, &height);
	if (!base->tex_ea_img->img)
		ft_error_close(ERROR_1);
	base->tex_ea_img->addr = mlx_get_data_addr(base->tex_ea_img->img,
			&base->tex_ea_img->bpp, &base->tex_ea_img->line_size,
			&base->tex_ea_img->endian);
	base->sprite_img->img = mlx_xpm_file_to_image(base->mlx->mlx,
			base->scene->sprite_file, &width, &height);
	if (!base->sprite_img->img)
		ft_error_close(ERROR_1);
	base->sprite_img->addr = mlx_get_data_addr(base->sprite_img->img,
			&base->sprite_img->bpp, &base->sprite_img->line_size,
			&base->sprite_img->endian);
}
