#include <stdio.h>
#include "libft.h"
#include <string.h>

int	main(void)
{
	char	*s = "Hello World";

	printf("Actual function: %p\n", strrchr(s, 'H'));
	printf("Your function  : %p\n", ft_strrchr(s, 'H'));
	printf("\n");

	printf("Actual function: %p\n", strrchr(s, 'l'));
	printf("Your function  : %p\n", ft_strrchr(s, 'l'));
	printf("\n");

	printf("Actual function: %p\n", strrchr(s, 'g'));
	printf("Your function  : %p\n", ft_strrchr(s, 'g'));
	printf("\n");

	printf("Actual function: %p\n", strrchr(s, '\0'));
	printf("Your function  : %p\n", ft_strrchr(s, '\0'));
	printf("\n");

	printf("Actual function: %p\n", strrchr(s, 'o' + 256));
	printf("Your function  : %p\n", ft_strrchr(s, 'o' + 256));
	printf("\n");

	return (0);
}
