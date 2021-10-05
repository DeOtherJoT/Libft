#include <stdio.h>
#include "libft.h"

t_list	*ft_lstnew(void *content);

int	main(void)
{
	t_list	*first;

	first = ft_lstnew("Hello World");
	printf("%s\n", (*first).content);
	printf("%p\n", (*first).next);
	return (0);
}
