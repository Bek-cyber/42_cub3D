#include "cub.h"

int	ft_parse_color(char *line)
{
	int	r;
	int	g;
	int	b;

	if (*line != ' ')
		ft_error_close(ERROR_14);
	ft_miss_char(&line, ' ');
	if (ft_oneness(line, "0123456789,") || ft_count_arguments(line) != 3
		|| ft_count_virgule(line) != 2)
		ft_error_close(ERROR_14);
	r = ft_atoi_for_parser(&line);
	ft_miss_char(&line, ',');
	g = ft_atoi_for_parser(&line);
	ft_miss_char(&line, ',');
	b = ft_atoi_for_parser(&line);
	if (r > 255 || g > 255 || b > 255)
		ft_error_close(ERROR_14);
	return (r << 16 | g << 8 | b);
}
