#include "cub.h"

void	ft_get_next_line_helper_2(char **line)
{
	if (!*line)
		ft_error_close(ERROR_11);
}

void	ft_get_next_line_helper_1(int flag)
{
	if ((flag) == -1)
		ft_error_close(ERROR_13);
}

int	get_next_line(int fd, char **line)
{
	char		buff[2];
	static char	mas[2];
	int			rb;
	int			flag;

	if (!line || fd < 0 || read(fd, 0, 0) < 0)
		return (-1);
	*line = malloc(1);
	ft_get_next_line_helper_2(line);
	**line = '\0';
	flag = ft_fill_line(mas, mas, line);
	ft_get_next_line_helper_1(flag);
	rb = 1;
	while (!flag && (rb == read(fd, buff, 1)))
	{
		buff[1] = '\0';
		flag = ft_fill_line(buff, mas, line);
		ft_get_next_line_helper_1(flag);
	}
	if (flag == 0)
	{
		*mas = '\0';
		return (0);
	}
	return (1);
}
