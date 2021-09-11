#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len);

int	main(void)
{
	char	str1[20] = "Hello World";
	int		offset = 6;
	size_t	len = 5;

	printf("IF DST > SRC\n");
	printf("Actual function:\n");
	printf("Returned pointer: %p\n", memmove(str1 + offset, str1, len));
	printf("Modified string:  %s\n", str1);

	strcpy(str1, "Hello World"); // reset str1

	printf("Your function:\n");
	printf("Returned pointer: %p\n", ft_memmove(str1 + offset, str1, len));
	printf("Modified string:  %s\n", str1);

	strcpy(str1, "Hello World");
	printf("\n");

	printf("IF SRC > DST\n");
	printf("Actual function:\n");
	printf("Returned pointer: %p\n", memmove(str1, str1 + offset, len));
	printf("Modified string:  %s\n", str1);

	strcpy(str1, "Hello World");

	printf("Your function:\n");
	printf("Returned pointer: %p\n", ft_memmove(str1, str1 + offset, len));
	printf("Modified string:  %s\n", str1);
	return (0);
}
