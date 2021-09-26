#include <stdio.h>
#include <limits.h>

char	*ft_itoa(int n);

int	main(void)
{
	printf("Expected result: -2147483648\n");
	printf("Returned result: %s\n", ft_itoa(INT_MIN));
	printf("\n");
	printf("Expected result: 2147483647\n");
	printf("Returned result: %s\n", ft_itoa(INT_MAX));
	printf("\n");
	printf("Expected result: 0\n");
	printf("Returned result: %s\n", ft_itoa(0));
	printf("\n");
	printf("Expected result: -42\n");
	printf("Returned result: %s\n", ft_itoa(-42));
	printf("\n");
	printf("Expected result: 12345\n");
	printf("Returned result: %s\n", ft_itoa(12345));
	printf("\n");

	return (0);
}
