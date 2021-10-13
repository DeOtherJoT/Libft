#include <stdio.h>
#include "libft.h"
#include <string.h>

int	main(void)
{
	char	*s = "Hello World";

	printf("Actual function: %p\n", strchr(s, 'H'));
	printf("Your function  : %p\n", ft_strchr(s, 'H'));
	printf("\n");

	printf("Actual function: %p\n", strchr(s, 'l'));
	printf("Your function  : %p\n", ft_strchr(s, 'l'));
	printf("\n");

	printf("Actual function: %p\n", strchr(s, 'h'));
	printf("Your function  : %p\n", ft_strchr(s, 'h'));
	printf("\n");

	printf("Actual function: %p\n", strchr(s, '\0'));
	printf("Your function  : %p\n", ft_strchr(s, '\0'));
	printf("\n");

	printf("Actual function: %p\n", strchr(s, 'H' + 256));
	printf("Your function  : %p\n", ft_strchr(s, 'H' + 256));
	printf("\n");

	return (0);
}
