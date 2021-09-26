#include <stdio.h>

char	**ft_split(char const *s, char c);

int	main(void)
{
	char *str = "Why hello there General Kenobi";
	char	**res = ft_split(str, ' ');

	if (res == NULL)
		return (0);
	while (*res != NULL)
	{
		printf("%s\n", *res);
		res++;
	}
	return (0);
}
