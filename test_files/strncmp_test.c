#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
	char	*str1 = "Hello World";
	char	*str2 = "Hello";
	char	*str3 = "Hewwo";
	char	*str4 = "";
	char	*str5 = "";

	printf("Actual Function: %d\n", strncmp(str1, str2, 5));
	printf("Your Function:   %d\n\n", ft_strncmp(str1, str2, 5));

	printf("Actual Function: %d\n", strncmp(str1, str2, 6));
	printf("Your Function:   %d\n\n", ft_strncmp(str1, str2, 6));

	printf("Actual Function: %d\n", strncmp(str1, str2, 7));
	printf("Your Function:   %d\n\n", ft_strncmp(str1, str2, 7));

	printf("Actual Function: %d\n", strncmp(str2, str3, 5));
	printf("Your Function:   %d\n\n", ft_strncmp(str2, str3, 5));

	printf("Actual Function: %d\n", strncmp(str2, str4, 5));
	printf("Your Function:   %d\n\n", ft_strncmp(str2, str4, 5));

	printf("Actual Function: %d\n", strncmp(str5, str4, 3));
	printf("Your Function:   %d\n\n", ft_strncmp(str5, str4, 3));

	printf("Actual Function: %d\n", strncmp(str1, str2, 0));
	printf("Your Function:   %d\n\n", ft_strncmp(str1, str2, 0));

	return (0);
}
