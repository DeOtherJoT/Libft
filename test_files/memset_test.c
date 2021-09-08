#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len);

int	main(void)
{
	char	str[20] = "Hello World";
	void	*ptr = str + 3;
	char	str2[20] = "Hello World";
	void	*ptr2 = str2 + 3;

	char	replace = '#';
	size_t	x = 3;

	memset(ptr, replace, x);
	printf("Actual function: %s\n", str);
	ft_memset(ptr2, replace, x);
	printf("Your function  : %s\n", str2);
	return (0);
}
