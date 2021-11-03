#include "cub.h"

void	ft_swap(double *a, double *b)
{
	double	c;

	c = *b;
	*b = *a;
	*a = c;
}
