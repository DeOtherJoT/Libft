#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void	ft_putchar_fd(char c, int fd);

int	main(void)
{
	int		fd[2];
	fd[0] = open("test_ft_putchar_fd.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
	fd[1] = open("test_ft_putchar_fd.txt", O_RDWR);
	char	*c = (char *)malloc(2 * sizeof(char));
 
	if (fd < 0)
	{
		printf("Failed to create file.\n");
		return (0);
	}
	ft_putchar_fd('A', fd[0]);
	read(fd[1], c, 1);
	c[1] = '\0';
	printf("Read from text file: %s\n", c);
	close(fd[0]);
	close(fd[1]);
	return (0);
}
