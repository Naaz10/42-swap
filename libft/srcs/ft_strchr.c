#include "libft.h"

/*
** Returns a pointer to the first occurence of c in s, or NULL is c does not
** occur.
*/
char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != c)
		s++;
	if (*s == c)
		return ((char *)s);
	else
		return (NULL);
}
