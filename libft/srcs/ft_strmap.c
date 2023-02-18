#include "libft.h"

/*
** Returns a new string which is the result of applying the function to the
** given string.
*/
char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;

	if (!s || !f || !(res = ft_strdup(s)))
		return (NULL);
	ft_striter(res, (void *)f);
	return (res);
}
