#include "cub.h"

size_t	ft_str_cpy(char *dst, char *src)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_str_len(src);
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
