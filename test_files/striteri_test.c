#include <stdio.h>
#include <string.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

void	ft_replace(unsigned int i, char *str)
{
	if (i > 8 && i < 24)
		*str = '0';
	return ;
}

int	main(void)
{
	char	str[] = "Replace <sdgjnwiejgnifjn> with 0s";

	printf("String before: %s\n", str);
	ft_striteri(str, ft_replace);
	printf("String after : %s\n", str);
	return (0);
}
