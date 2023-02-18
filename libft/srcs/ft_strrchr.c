#include "libft.h"

/*
** Returns a ponter to the last occurence of c in s, or NULL if c does not
** occur.
*/
char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s) - 1;
	if (c == 0)
		return ((char *)(s + i + 1));
	while (i >= 0 && s[i] != c)
		i--;
	if (s[i] == c)
		return ((char *)(s + i));
	else
		return (NULL);
}
