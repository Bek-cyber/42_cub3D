#include "cub.h"

int	ft_count_virgule(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = -1;
	while (str[++i] != '\0')
		if (str[i] == ',')
			count++;
	return (count);
}
