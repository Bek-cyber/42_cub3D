#include "cub.h"

int	ft_check_tail(char *str, char *tail)
{
	int	len;

	len = ft_str_len(str);
	if (((ft_str_n_str(str, tail, len)) != str + len - 4) || len <= 4)
		return (1);
	return (0);
}
