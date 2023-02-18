#include "push_swap.h"

int		get_mediane(int *mediane, int *pile, int len)
{
	int		*cache;
	int		i;

	if (!(cache = (int *)malloc(sizeof(int) * len)))
		return (0);
	i = -1;
	while (++i < len)
		cache[i] = pile[i];
	reg_quick_sort(cache, len);
	*mediane = cache[len / 2];
	free(cache);
	return (1);
}
