#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

int	main(void)
{
	char		dst[20] = "Project";
	char		dst2[20] = "Project";
	char		*src = "Wish";
	size_t		dst_size = 7;

	printf("Actual Function; \n");
	printf("Returned value: %lu\n", strlcat(dst, src, dst_size));
	printf("Destination:    %s\n", dst);
	printf("Source:         %s\n", src);
	printf("\n");
	printf("Your Function; \n");
	printf("Returned value: %lu\n", ft_strlcat(dst2, src, dst_size));
	printf("Destination:    %s\n", dst2);
	printf("Source:         %s\n", src);

	return (0);
}
