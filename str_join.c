#include "cub.h"

char	*ft_str_join(char *s1, char *s2)
{
	int		len1;
	int		len2;
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_str_len(s1);
	len2 = ft_str_len(s2);
	str = malloc(len1 + len2 + 1);
	if (!(str))
		return (NULL);
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	while (j < len2)
		str[i++] = s2[j++];
	str[i] = '\0';
	free((void *)s1);
	return (str);
}
