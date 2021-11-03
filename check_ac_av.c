#include "cub.h"

void	ft_check_ac_av(int ac, char **av, t_base *base)
{
	int	fd;

	if (ac == 3)
	{
		if (ft_str_n_str(av[2], "--save", ft_str_len(av[2])))
			base->flags->screenshot = 1;
		else
			ft_error_close(ERROR_2);
	}
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
		ft_error_close(ERROR_3);
	if (ft_check_tail(av[1], ".cub"))
		ft_error_close(ERROR_4);
}
