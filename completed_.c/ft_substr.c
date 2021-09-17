#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*retptr;

	retptr = (char *)malloc(len + 1);
	if (!retptr)
		return (NULL);
	i = 0;
	while (i < len && s[start])
	{
		retptr[i] = s[start];
		i++;
		start++;
	}
	retptr[i] = '\0';
	return (retptr);
}
