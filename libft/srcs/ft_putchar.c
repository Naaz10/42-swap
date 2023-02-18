#include "libft.h"

/*
** Writes character c.
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
