#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2);

int	main(void)
{
	char	*s1 = "Hello";
	char	*s2 = " World";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
