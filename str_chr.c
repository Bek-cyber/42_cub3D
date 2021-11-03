#include "cub.h"

char	*ft_str_chr(char *s, int c)
{
	int	n;
	int	i;

	i = 0;
	n = ft_str_len(s);
	if (c == '\0')
		return ((char *)s + n);
	while (i < n)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
