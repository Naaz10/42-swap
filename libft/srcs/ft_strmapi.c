#include "libft.h"

/*
** Returns a new string which is the result of applying the function to the
** given string. The function takes the index of each character as a parameter.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;

	if (!s || !f || !(res = ft_strdup(s)))
		return (NULL);
	ft_striteri(res, (void *)f);
	return (res);
}
