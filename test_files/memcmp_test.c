#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(void)
{
	char    *str1 = "Hello World";
	char    *str2 = "HelloWorld";
	char	*str3 = "";
	char	*str4 = "";
	char	*str5 = "Hello World";
	char	*str6 = "Hello\0World";

	printf("Actual function: %d\n", memcmp(str1, str2, 5));
	printf("Your function:   %d\n", ft_memcmp(str1, str2, 5));
	printf("\n");

	printf("Actual function: %d\n", memcmp(str1, str2, 6));
	printf("Your function:   %d\n", ft_memcmp(str1, str2, 6));
	printf("\n");

	printf("Actual function: %d\n", memcmp(str1, str2, 7));
	printf("Your function:   %d\n", ft_memcmp(str1, str2, 7));
	printf("\n");

	printf("Actual function: %d\n", memcmp(str2, str1, 7));
	printf("Your function:   %d\n", ft_memcmp(str2, str1, 7));
	printf("\n");

	printf("Actual function: %d\n", memcmp(str3, str4, 7));
	printf("Your function:   %d\n", ft_memcmp(str3, str4, 7));
	printf("\n");

	printf("Actual function: %d\n", memcmp(str1, str2, 0));
	printf("Your function:   %d\n", ft_memcmp(str1, str2, 0));
	printf("\n");

	printf("Actual function: %d\n", memcmp(str1, str5, 13));
	printf("Your function:   %d\n", ft_memcmp(str1, str5, 13));
	printf("\n");

	printf("Actual function: %d\n", memcmp(str1, str6, 13));
	printf("Your function:   %d\n", ft_memcmp(str1, str6, 13));
	printf("\n");
	return (0);
}
