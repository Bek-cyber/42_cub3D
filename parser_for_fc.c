#include "cub.h"

void	ft_parser_for_fc(t_base *base, char *line)
{
	if (*line == 'F')
	{
		base->scene->floor_color = ft_parse_color(++line);
		base->flags->f++;
	}
	if (*line == 'C')
	{
		base->scene->ceiling_color = ft_parse_color(++line);
		base->flags->c++;
	}
}
