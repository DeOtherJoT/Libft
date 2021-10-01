#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

void	ft_putendl_fd(char *s, int fd);

int	main(void)
{
	char	*s1 = "This is the first line.";
	char	*s2 = "This should be the second line.";
	char	*c = (char *)malloc(100 * sizeof(char));

	int fd[2];
	fd[0] = open("test_putendl_fd.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
	fd[1] = open("test_putendl_fd.txt", O_RDWR);

	ft_putendl_fd(s1, fd[0]);
	ft_putendl_fd(s2, fd[0]);

	printf("Read strings from file: \n");
	write(1, c, read(fd[1], c, (strlen(s1) + strlen(s2) + 2)));
	close(fd[0]);
	close(fd[1]);
	return (0);
}
