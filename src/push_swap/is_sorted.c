#include "push_swap.h"

int		is_sorted(int *pile, int len, int order)
{
	int		i;

	i = -1;
	while (++i < len - 1)
		if ((order == ASCENDING && pile[i] > pile[i + 1])
				|| (order == DESCENDING && pile[i] < pile[i + 1]))
			return (0);
	return (1);
}
