#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *b, size_t len);

int	main(void)
{
	char	str[20] = "Hello World";
	void	*ptr = str + 10;
	char	str2[20] = "Hello World";
	void	*ptr2 = str2 + 10;

	size_t	x = 2;

	bzero(ptr, x);
	printf("Actual function: %s\n", str);
	ft_bzero(ptr2, x);
	printf("Your function  : %s\n", str2);
	return (0);
}
