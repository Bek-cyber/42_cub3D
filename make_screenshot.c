#include "cub.h"

void	ft_make_screenshot(t_base base)
{
	int	fd;
	int	width;
	int	zero;
	int	size;

	zero = 0;
	fd = open("screenshot.bmp", O_CREAT | O_RDWR, 0666);
	if (fd < 0)
		ft_error_close(ERROR_3);
	width = base.scene->wid * base.scene->hei * 4 + 54;
	size = base.scene->wid * base.scene->hei;
	ft_screenshot(base, fd);
	write(fd, &zero, 4);
	write(fd, &size, 4);
	width = 1000;
	write(fd, &width, 4);
	write(fd, &width, 4);
	write(fd, &zero, 4);
	write(fd, &zero, 4);
	ft_put_pixel_to_file(fd, base);
	close(fd);
}
