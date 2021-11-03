#include "cub.h"

void 	ft_parse_map_helper(t_base *base, char *line)
{
	base->j = 1;
	while (*line)
	{
		base->scene->map[base->i][base->j++] = *line;
		line++;
	}
}

int	ft_parse_map_cycle(int rd, int fd, char **line, t_base *base)
{
	char	*str;

	ft_parse_map_helper(base, *line);
	base->i++;
	ft_free(*line);
	rd = get_next_line(fd, &str);
	*line = str;
	return (rd);
}

void	ft_parser_for_map(t_base *base, char **av)
{
	int		fd;
	int		rd;
	char	*line;

	fd = open(av[1], O_RDONLY);
	rd = get_next_line(fd, &line);
	ft_map_alloc(base);
	ft_fill_map(base);
	while (rd > 0)
	{
		if (!(ft_oneness(line, " 1")) && ft_str_chr(line, '1'))
		{
			base->i = 0;
			while (rd > 0)
				rd = ft_parse_map_cycle(rd, fd, &line, base);
			ft_parse_map_helper(base, line);
		}
		ft_free(line);
		rd = get_next_line(fd, &line);
	}
	close(fd);
	ft_free(line);
	ft_check_map(base);
}
