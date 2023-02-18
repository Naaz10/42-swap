#include "libft.h"

/*
** Copies a maximum of n bits of src to dst, until character c is found.
*/
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	if (!src && !dst)
		return (NULL);
	i = -1;
	while (++i < n && ((unsigned char *)src)[i] != (unsigned char)c)
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	if (((unsigned char *)src)[i] == (unsigned char)c && i != n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		return (dst + i + 1);
	}
	return (NULL);
}
