#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <limits.h>

void	ft_putnbr_fd(int n, int fd);

void	ft_putchar_fd(char c, int fd);

int	main(void)
{
	int	fd[2];
	fd[0] = open("test_ft_putnbr_fd.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
	fd[1] = open("test_ft_putnbr_fd.txt", O_RDWR);
	char	*c = (char *)malloc(100 * sizeof(char));
	
	if (fd[0] < 0 || fd[1] < 0)
	{
		printf("Failed to create file.\n");
		return (0);
	}

	ft_putnbr_fd(INT_MIN, fd[0]);
	ft_putchar_fd('\n', fd[0]);
	ft_putnbr_fd(INT_MAX, fd[0]);
	ft_putchar_fd('\n', fd[0]);
	ft_putnbr_fd(1234567890, fd[0]);
	ft_putchar_fd('\n', fd[0]);
	ft_putnbr_fd(-42, fd[0]);
	ft_putchar_fd('\n', fd[0]);
	ft_putnbr_fd(0, fd[0]);
	ft_putchar_fd('\n', fd[0]);
	close(fd[0]);

	read(fd[1], c, 40);
	c[40] = '\0';
	close(fd[1]);

	printf("Expected output:\n%d\n%d\n1234567890\n-42\n0\n\n", INT_MIN, INT_MAX);
	printf("Read from test file:\n%s", c);
	return (0);
}
