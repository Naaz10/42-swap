#include "libft.h"

/*
** Returns a new string which corresponds to the given string minus the starting
** and ending whitespaces.
*/
char	*ft_strtrim(char const *s)
{
	int		len;

	if (!s)
		return (NULL);
	while (*s && ft_iswhitespace(*s))
		s++;
	len = ft_strlen(s);
	while (ft_iswhitespace(s[--len]))
		;
	return (ft_strsub(s, 0, ft_strlen(s) - len));
}
