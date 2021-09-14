#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size);

int	main(void)
{
	char	*arr1;
	int		*arr2;

	arr1 = (char *)ft_calloc(5, sizeof(char));
	arr2 = (int *)ft_calloc(5, sizeof(int));

	printf("-.-.-Integer array-.-.-\n");
	if (arr2 == NULL)
	{
		printf("Failed to allocate memory. Ending test.\n");
		return (0);
	}
	for (int x = 0; x < 5; x++)
	{
		if (arr2[x] == 0)
			printf("Zero count: %d\n", x + 1);
	}
	printf("\n");
	free(arr2);

	printf("-.-.-Character array-.-.-\n");
	if (arr1 == NULL)
	{
		printf("Failed to allocate memory. Ending test.\n");
		return(0);
	}
	for (int y = 0; y < 5; y++)
	{
		if (arr1[y] == 0)
			printf("Zero count: %d\n", y + 1);
	}
	printf("\n");
	free(arr1);

	return (0);
}
