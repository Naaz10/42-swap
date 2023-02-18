#include "common.h"

void	checker(t_piles piles)
{
	int		i;

	if (piles.blen)
	{
		write(1, "KO\n", 3);
		return ;
	}
	i = -1;
	while (++i < piles.alen - 1)
		if (piles.a[i] > piles.a[i + 1])
		{
			write(1, "KO\n", 3);
			return ;
		}
	write(1, "OK\n", 3);
}
