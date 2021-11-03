#include "cub.h"

void	ft_check_around(t_base *base, int y, int x)
{
	if (x == 0 || y == 0
		||base->scene->map[y + 1][x] == '\0' ||
		base->scene->map[y][x + 1] == '\0' ||
		base->scene->map[y + 1][x] == ' ' ||
		base->scene->map[y - 1][x] == ' ' ||
		base->scene->map[y][x + 1] == ' ' ||
		base->scene->map[y][x - 1] == ' ')
		ft_error_close(ERROR_5);
}
