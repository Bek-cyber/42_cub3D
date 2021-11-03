#include "cub.h"

char	*ft_sub_str(char *s, int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (s == NULL)
		return (NULL);
	if ((int)start < ft_str_len(s))
	{
		str = malloc(len + 1);
		if (!(str))
			return (NULL);
		while (i < len && s[start])
			str[i++] = s[start++];
	}
	else
	{
		str = malloc(1);
		if (!(str))
			return (NULL);
	}
	str[i] = '\0';
	return (str);
}
