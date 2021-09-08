#include "libft.h"

int	main(void)
{
	//char	*str1 = "Hello World";
	char	*str2 = "";
	char	str3[20] = "fjdnfgbsdj";
	char    str3_t[20] = "fjdnfgbsdj";
	
	char	*src = str2;
	size_t	n = 3;

	printf("Actual Function: ");
	printf("%lu\n", strlcpy(str3, src, n));
	printf("%s\n", str3);
	printf("\n");
	printf("Your Function: ");
	printf("%lu\n", ft_strlcpy(str3_t, src, n));
	printf("%s\n", str3_t);
	return (0);
}
