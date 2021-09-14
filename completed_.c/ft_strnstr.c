#include "libft.h"

char	*ft_strnstr(const char *hay, const char *str, size_t n)
{
	size_t	i;
	size_t	j;

	if (!(str[0]))
		return ((char *)hay);
	j = 0;
	while (hay[j] && (j + ft_strlen(str)) <= n)
	{
		i = 0;
		while (hay[j + i] == str[i] && hay[j + i])
		{
			if (!(str[i + 1]))
				return (((char *)hay + j));
			i++;
		}
		j++;
	}
	return (0);
}
