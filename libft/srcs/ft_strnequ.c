#include "libft.h"

/*
** Returns true if the n first characters of s1 and s2 are similar.
*/
int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 && !s2)
		return (1);
	if (!s1 || !s2)
		return (0);
	return (!ft_strncmp(s1, s2, n));
}
