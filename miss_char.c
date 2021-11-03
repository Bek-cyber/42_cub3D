#include "cub.h"

void	ft_miss_char(char **str, char c)
{
	while (**str == c)
		(*str)++;
}
