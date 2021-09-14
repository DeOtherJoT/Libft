#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *hay, const char *str, size_t n);

int	main(void)
{
	char	*haystack = "Hello World";
	char	*needle1 = "World";
	char	*needle2 = "";
	char	*needle3 = "Hellop";
	char	*needle4 = "l";

	printf("Actual Function: %s\n", strnstr(haystack, needle1, 11));
	printf("Your Function:   %s\n", ft_strnstr(haystack, needle1, 11));
	printf("\n");	

	printf("Actual Function: %s\n", strnstr(haystack, needle1, 10));
	printf("Your Function:   %s\n", ft_strnstr(haystack, needle1, 10));
	printf("\n");

	printf("Actual Function: %s\n", strnstr(haystack, needle1, 0));
	printf("Your Function:   %s\n", ft_strnstr(haystack, needle1, 0));
	printf("\n");

	printf("Actual Function: %s\n", strnstr(haystack, needle2, 11));
	printf("Your Function:   %s\n", ft_strnstr(haystack, needle2, 11));
	printf("\n");

	printf("Actual Function: %s\n", strnstr(haystack, needle3, 11));
	printf("Your Function:   %s\n", ft_strnstr(haystack, needle3, 11));
	printf("\n");

	printf("Actual Function: %p\n", strnstr(haystack, needle4, 11));
	printf("Your Function:   %p\n", ft_strnstr(haystack, needle4, 11));
	return (0);
}
