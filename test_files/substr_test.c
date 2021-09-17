#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	main(void)
{
	char	*str1 = "Hello World";
	char	*ptr;

	ptr = ft_substr(str1, 6, 3);
	printf("%s\n", ptr);
	return (0);
}
