#include "cub.h"

int	main(int ac, char **av)
{
	t_base	base;
	t_data	data;
	t_mlx	mlx;

	if (ac == 2 || ac == 3) {
		base.mlx = &mlx;
		base.data = &data;
		ft_malloc_func(&base);
		ft_init_structures(&base);
		ft_check_ac_av(ac, av, &base);
		ft_parse_the_arguments(&base, av);
		ft_parser_for_map(&base, av);
//		int i = 0;
//		while (i < base.scene->m_hei)
//			printf("%s\n", base.scene->map[i++]);
		ft_begin_drawing(base);
	}
	else
		ft_error_close(ERROR_14);
	return (0);
}
