#include "libft.h"
/*
** Sets len bits of the pointer to c.
*/
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = -1;
	while (++i < len)
		*((char *)(b + i)) = c;
	return (b);
}
