#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

static char	ft_up_one(unsigned int i, char c)
{
	unsigned int	n = i;
	n = 0;
	return (c + 1);
}

static char	ft_replace(unsigned int n, char c)
{
	if (n > 8 && n < 21)
		return ('0');
	return (c);
}

int	main(void)
{
	char	*str1 = "012345678";
	char	*str2 = "Replace <sfsfkjgbwrgj> with 0s";

	printf("--- Test one ---\n");
	printf("String before  : %s\n", str1);
	printf("Returned string: %s\n", ft_strmapi(str1, ft_up_one));
	printf("String after   : %s\n", str1);
	printf("\n");
	printf("--- Test two ---\n");
	printf("String before  : %s\n", str2);
	printf("Returned string: %s\n", ft_strmapi(str2, ft_replace));
	printf("String after   : %s\n", str2);
	printf("\n");
	return (0);
}
