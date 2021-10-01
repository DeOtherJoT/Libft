#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd);

int	main(void)
{
	int		fd[2];
	char	s[12] = "Hello World";
	char	*c = (char *)malloc(20 * sizeof(char));

	fd[0] = open("test_putstr_fd.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
	fd[1] = open("test_putstr_fd.txt", O_RDWR);

	if (fd[0] < 0 || fd[1] < 0)
	{
		printf("Failed to create file.\n");
		return (0);
	}

	ft_putstr_fd(s, fd[0]);
	close(fd[0]);

	printf("String read from file: \n");
	write(1, c, read(fd[1], c, 12));
	close(fd[1]);

	return (0);
}
