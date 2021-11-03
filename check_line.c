#include "cub.h"

int	ft_check_line_helper_1(t_base *base, char *line, char *str)
{
	if (*str == 'R')
	{
		ft_parser_for_r(base, str);
		return (1);
	}
	else if (*str == 'N' && *(str + 1) == 'O')
	{
		ft_parser_for_nwse(base, str);
		ft_free(line);
		return (1);
	}
	else if (*str == 'S' && *(str + 1) == 'O')
	{
		ft_parser_for_nwse(base, str);
		ft_free(line);
		return (1);
	}
	else if (*str == 'W' && *(str + 1) == 'E')
	{
		ft_parser_for_nwse(base, str);
		ft_free(line);
		return (1);
	}
	return (0);
}

int	ft_check_line_helper_2(t_base *base, char *line, char *str)
{
	if (*str == 'E' && *(str + 1) == 'A')
	{
		ft_parser_for_nwse(base, str);
		ft_free(line);
		return (1);
	}
	else if (*str == 'S' && *(str + 1) != 'O')
	{
		ft_parser_for_sp(base, str);
		ft_free(line);
		return (1);
	}
	else if (*str == 'F' || *str == 'C')
	{
		ft_parser_for_fc(base, str);
		ft_free(line);
		return (1);
	}
	return (0);
}

int	ft_check_line(t_base *base, char *line)
{
	char	*str;

	str = line;
	if (!(ft_check_line_helper_1(base, line, str)))
	{
		if (!(ft_check_line_helper_2(base, line, str)))
		{
			if (!(*str) || *str == '\n')
			{
				ft_free(line);
				return (1);
			}
			else if (!(ft_oneness(str, " 1")) && ft_str_chr(str, '1'))
				return (2);
			else
				return (0);
		}
	}
}
