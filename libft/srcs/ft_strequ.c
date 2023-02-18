#include "libft.h"

/*
** Returns true if the strangs are similar, false otherwise.
*/
int		ft_strequ(char const *s1, char const *s2)
{
	if (!s1 && !s2)
		return (1);
	if (!s1 || !s2)
		return (0);
	return (!ft_strcmp(s1, s2));
}
