#include "cub.h"

char	*ft_str_trim(char *s1, char *set)
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_str_len(s1);
	while (s1[i] && ft_str_chr(set, s1[i]))
		i++;
	while (len && (ft_str_chr(set, s1[len])))
		len--;
	if (len > 0)
		str = ft_sub_str(s1, i, len - i + 1);
	else
		str = ft_sub_str(s1, i, 1);
	return (str);
}
