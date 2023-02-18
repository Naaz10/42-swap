#include "libft.h"

/*
** Copies len bits of src to dst. Protected against overlapping.
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*d;
	char	*s;

	i = -1;
	d = (char *)dst;
	s = (char *)src;
	if (dst < src)
	{
		while (++i < (int)len)
			*(d++) = *(s++);
	}
	else
	{
		d += len - 1;
		s += len - 1;
		while (++i < (int)len)
			*(d--) = *(s--);
	}
	return (dst);
}
