#include "libft.h"

/*
** Returns a new string similas to s1.
*/
char	*ft_strdup(const char *s1)
{
	char	*res;
	int		i;

	if (!s1 || !(res = ft_strnew(ft_strlen(s1))))
		return (NULL);
	i = -1;
	while (s1[++i])
		res[i] = s1[i];
	return (res);
}
