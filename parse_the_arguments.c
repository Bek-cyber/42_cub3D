#include "cub.h"

void 	ft_increase(t_base *base, int len)
{
	base->scene->m_hei++;
	if (len > base->scene->m_wid)
		base->scene->m_wid = len;
}

void 	ft_cycle(int fd, int rd, char *line, t_base *base)
{
	int		fl;

	while (rd > 0)
	{
		fl = ft_check_line(base, line);
		if (fl == 2)
		{
			while (rd > 0)
			{
				ft_increase(base, ft_str_len(line));
				ft_free(line);
				rd = get_next_line(fd, &line);
			}
			ft_increase(base, ft_str_len(line));
			ft_free(line);
		}
		if (fl == 0)
			ft_error_close(ERROR_15);
		rd = get_next_line(fd, &line);
	}
	ft_free(line);
}

void	ft_parse_the_arguments(t_base *base, char **av)
{
	int		fd;
	int		rd;
	char	*line;

	fd = open(av[1], O_RDONLY);
	rd = get_next_line(fd, &line);
	if (fd < 0 || rd < 0)
		ft_error_close(ERROR_15);
	ft_cycle(fd, rd, line, base);
	ft_free(line);
	close(fd);
}
