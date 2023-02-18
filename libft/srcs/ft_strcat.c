#include "libft.h"

/*
** Copies the content of s2 at the end of s1.
*/
char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		len1;

	i = -1;
	len1 = ft_strlen(s1);
	while (s2[++i])
		s1[len1 + i] = s2[i];
	s1[len1 + i] = 0;
	return (s1);
}
