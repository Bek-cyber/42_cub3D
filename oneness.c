#include "cub.h"

int	ft_oneness(char *s1, char *s2)
{
	if (!s1 || !s2)
		return (1);
	while (*s1)
	{
		if (!(ft_str_chr(s2, *s1)))
			return (1);
		s1++;
	}
	return (0);
}
