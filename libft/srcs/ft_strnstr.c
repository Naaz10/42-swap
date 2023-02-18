#include "libft.h"

/*
** Returns a pointer to the first occurence of the needle in the haystack, or
** NULL if the needle does not occur.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	lh;
	size_t	ln;
	size_t	i;

	if (!*needle)
		return ((char *)haystack);
	lh = ft_strlen(haystack);
	ln = ft_strlen(needle);
	i = -1;
	while (++i < len && ln + i <= lh)
		if (ft_strnequ(haystack + i, needle, ln) && i + ln <= len)
			return ((char *)(haystack + i));
	return (NULL);
}
