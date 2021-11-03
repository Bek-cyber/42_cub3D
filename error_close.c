#include "cub.h"

void	ft_error_close(char *str)
{
	int	i;

	i = 0;
	write(2, "Error\n", 6);
	while (str[i])
		write(2, &str[i++], 1);
	write(2, "\n", 1);
	exit(1);
}
