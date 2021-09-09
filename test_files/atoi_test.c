#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str);

int	main(void)
{
	/* --TEST CASES-- */
	char	*str1 = "1234567890";
	char	*str2 = "-1234567890";
	char	*str3 = "+2147483647";
	char	*str4 = "-2147483648";
	char	*str5 = "42w42";
	char	*str6 = "-+-432";
	char	*str7 = " \n\t\v\r\f+345";

	/* --TESTS-- */
	printf("Actual Function: %d\n", atoi(str1));
	printf("Your Function:   %d\n\n", ft_atoi(str1));
	printf("Actual Function: %d\n", atoi(str2));
	printf("Your Function:   %d\n\n", ft_atoi(str2));
	printf("Actual Function: %d\n", atoi(str3));
	printf("Your Function:   %d\n\n", ft_atoi(str3));
	printf("Actual Function: %d\n", atoi(str4));
	printf("Your Function:   %d\n\n", ft_atoi(str4));
	printf("Actual Function: %d\n", atoi(str5));
	printf("Your Function:   %d\n\n", ft_atoi(str5));
	printf("Actual Function: %d\n", atoi(str6));
	printf("Your Function:   %d\n\n", ft_atoi(str6));
	printf("Actual Function: %d\n", atoi(str7));
	printf("Your Function:   %d\n\n", ft_atoi(str7));
	return (0);
}
