#include "cub.h"

int	ft_count_arguments(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((s[i] != ' ' && s[i] != ',' && s[i] != '\t')
			&& (s[i + 1] == ' ' || s[i + 1] == ',' || s[i] == '\t'
				|| s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}
