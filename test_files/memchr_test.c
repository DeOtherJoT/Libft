#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);

int	main(void)
{
	char	*str = "Hello World";
	char	x = 'o';
	char	y = 'p';
	char	z = 'd';

	printf("Actual function: %p\n", memchr(str, x, 11));
	printf("Your function:   %p\n\n", ft_memchr(str, x, 11));
	printf("Actual function: %p\n", memchr(str, x, 4));
	printf("Your function:   %p\n\n", ft_memchr(str, x, 4));
	printf("Actual function: %p\n", memchr(str, y, 11));
	printf("Your function:   %p\n\n", ft_memchr(str, y, 11));
	printf("Actual function: %p\n", memchr(str, z, 11));
	printf("Your function:   %p\n\n", ft_memchr(str, z, 11));
	return (0);
}
