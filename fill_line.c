#include "cub.h"

int	ft_fill_line(char *str, char *mas, char **line)
{
	char	*end;
	int		a;

	a = 0;
	end = ft_str_chr(str, '\n');
	if (end)
	{
		*end = '\0';
		*line = ft_str_join(*line, str);
		if (!(*line))
		{
			free(*line);
			return (-1);
		}
		ft_str_cpy(mas, ++end);
		a = 1;
	}
	*line = ft_str_join(*line, str);
	if (!(*line))
	{
		free(*line);
		return (-1);
	}
	return (a);
}
