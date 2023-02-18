#include "libft.h"

/*
** Writes the bits of c.
*/
void	ft_printbits(char c)
{
	unsigned char	bit;

	bit = 1 << 7;
	while (bit)
	{
		if (bit & c)
			ft_putchar('1');
		else
			ft_putchar('0');
		bit = bit >> 1;
	}
}
