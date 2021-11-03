#include "cub.h"

void	ft_parser_for_r(t_base *base, char *line)
{
	line++;
	if (*line != ' ')
		ft_error_close(ERROR_14);
	if (ft_oneness(line, "0123456789 ") || ft_count_arguments(line) != 2)
		ft_error_close(ERROR_14);
	ft_miss_char(&line, ' ');
	base->scene->wid = ft_atoi_for_parser(&line);
	ft_miss_char(&line, ' ');
	base->scene->hei = ft_atoi_for_parser(&line);
	if (base->scene->wid == 0 || base->scene->hei == 0)
		ft_error_close(ERROR_14);
	base->flags->r++;
}
