#include "libft.h"

/*
** Allocates memory and sets the bits to 0.
*/
void	*ft_memalloc(size_t size)
{
	void	*res;

	if (!(res = malloc(size)))
		return (NULL);
	ft_bzero(res, size);
	return (res);
}
