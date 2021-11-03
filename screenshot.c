#include "cub.h"

void	ft_screenshot(t_base base, int fd)
{
	int		width;
	int		pos_pixel_data;
	int		zero;
	short	plane;

	plane = 1;
	zero = 0;
	pos_pixel_data = 54;
	width = base.scene->wid * base.scene->hei * 4 + 54;
	write(fd, "BM", 2);
	write(fd, &width, 4);
	write(fd, &zero, 4);
	write(fd, &pos_pixel_data, 4);
	pos_pixel_data = 40;
	write(fd, &pos_pixel_data, 4);
	write(fd, &base.scene->wid, 4);
	write(fd, &base.scene->hei, 4);
	write(fd, &plane, 2);
	plane = 32;
	write(fd, &plane, 2);
}
