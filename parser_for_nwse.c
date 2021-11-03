#include "cub.h"

void	ft_check_spaces(char line)
{
	if (line != ' ')
		ft_error_close(ERROR_14);
}

void 	ft_parse_nwse_helper(t_base *base, char *line)
{
	if (*line == 'W' && *(++line) == 'E')
	{
		++line;
		ft_check_spaces(*line);
		base->scene->tex_we_file = ft_str_trim(line, " 	");
		if (!(base->scene->tex_we_file))
			ft_error_close(ERROR_14);
		if (ft_check_tail(base->scene->tex_we_file, ".xpm"))
			ft_error_close(ERROR_14);
		base->flags->we++;
	}
	else if (*line == 'E' && *(++line) == 'A')
	{
		++line;
		ft_check_spaces(*line);
		base->scene->tex_ea_file = ft_str_trim(line, " 	");
		if (!(base->scene->tex_ea_file))
			ft_error_close(ERROR_14);
		if (ft_check_tail(base->scene->tex_ea_file, ".xpm"))
			ft_error_close(ERROR_14);
		base->flags->ea++;
	}
}

void	ft_parser_for_nwse(t_base *base, char *line)
{
	if (*line == 'N' && *(++line) == 'O')
	{
		++line;
		ft_check_spaces(*line);
		base->scene->tex_no_file = ft_str_trim(line, " 	");
		if (!(base->scene->tex_no_file))
			ft_error_close(ERROR_14);
		if (ft_check_tail(base->scene->tex_no_file, ".xpm"))
			ft_error_close(ERROR_14);
		base->flags->no++;
	}
	else if (*line == 'S' && *(++line) == 'O')
	{
		++line;
		ft_check_spaces(*line);
		base->scene->tex_so_file = ft_str_trim(line, " 	");
		if (!(base->scene->tex_so_file))
			ft_error_close(ERROR_14);
		if (ft_check_tail(base->scene->tex_so_file, ".xpm"))
			ft_error_close(ERROR_14);
		base->flags->so++;
	}
	else
		ft_parse_nwse_helper(base, line);
}
