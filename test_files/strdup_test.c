#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1);

int	main(void)
{
	char	*src = "Hello World";
	char	*dst = ft_strdup(src);

	printf("Source string : %s\n", src);
	printf("Copied string : %s\n", dst);
	return (0);
}
