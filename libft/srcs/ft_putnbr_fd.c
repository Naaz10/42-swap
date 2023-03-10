#include "libft.h"

/*
** Writes the given int in the given file descriptor.
*/
void	ft_putnbr_fd(int n, int fd)
{
	int		pow;
	char	digit;

	if (n == INT_MIN)
		ft_putstr_fd("-2147483648", fd);
	else if (n == 0)
		ft_putchar_fd('0', fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n *= -1;
		}
		pow = 1;
		while (n / pow >= 10)
			pow *= 10;
		while (pow)
		{
			digit = n / pow + '0';
			ft_putchar_fd(digit, fd);
			n = n % pow;
			pow /= 10;
		}
	}
}
