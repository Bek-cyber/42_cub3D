#include "cub.h"

int	ft_atoi_for_parser(char **str)
{
	int	num;

	num = 0;
	while (**str == 32)
		(*str)++;
	if (**str == '\0')
		return (0);
	while (**str >= '0' && **str <= '9')
	{
		num = num * 10 + (**str - '0');
		if (num > 99999)
			ft_error_close(ERROR_14);
		(*str)++;
	}
	return (num);
}
