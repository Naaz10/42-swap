#include "libft.h"

/*
** Writes the given int on the standard output.
*/
void	ft_putnbr(int n)
{
	int		pow;
	char	digit;

	if (n == INT_MIN)
		ft_putstr("-2147483648");
	else if (n == 0)
		ft_putchar('0');
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
		}
		pow = 1;
		while (n / pow >= 10)
			pow *= 10;
		while (pow)
		{
			digit = n / pow + '0';
			ft_putchar(digit);
			n = n % pow;
			pow /= 10;
		}
	}
}
