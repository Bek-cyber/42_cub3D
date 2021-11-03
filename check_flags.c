#include "cub.h"

void	ft_check_hole(t_base *base)
{
	int	i;

	i = 0;
	while (i < base->scene->m_hei)
		if (ft_oneness(base->scene->map[i++], " 012NSWE"))
			ft_error_close(ERROR_5);
}

void	ft_check_flags(t_base *base)
{
	ft_check_hole(base);
	if (base->flags->r)
		ft_error_close(ERROR_6);
	if (base->flags->c || base->flags->f)
		ft_error_close(ERROR_7);
	if (base->flags->s || base->flags->no || base->flags->so
		|| base->flags->we || base->flags->ea)
		ft_error_close(ERROR_8);
	if (base->flags->map)
		ft_error_close(ERROR_9);
	if (base->flags->pl)
		ft_error_close(ERROR_10);
	if (base->scene->wid > 2560)
		base->scene->wid = 2560;
	if (base->scene->hei > 1440)
		base->scene->hei = 1440;
}
