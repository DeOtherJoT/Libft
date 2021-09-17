#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);

int	main(void)
{
	char	*str = "  Hello World  ";
	char	*trim = "de ";

	printf("%s\n", ft_strtrim(str, trim));
	return (0);
}
