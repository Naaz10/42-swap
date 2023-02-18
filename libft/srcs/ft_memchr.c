#include "libft.h"

/*
** Returns a pointer to the first occurence of c in s or NULL if c does not
** occur.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = -1;
	while (++i < n)
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
	return (NULL);
}

