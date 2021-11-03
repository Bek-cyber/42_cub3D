#include "cub.h"

void	ft_parser_for_sp(t_base *base, char *line)
{
	++line;
	if (*line != ' ')
		ft_error_close(ERROR_14);
	base->scene->sprite_file = ft_str_trim(line, " 	");
	if (!(base->scene->sprite_file))
		ft_error_close(ERROR_14);
	if (ft_check_tail(base->scene->sprite_file, ".xpm"))
		ft_error_close(ERROR_14);
	base->flags->s++;
}
