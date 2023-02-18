#include "libft.h"

/*
** Returns a freshly allocated string of size characters and terminated by an
** additional 0. All the characters are set to 0.
*/
char	*ft_strnew(size_t size)
{
	char	*res;

	if (!(res = (char *)malloc(size + 1)))
		return (NULL);
	ft_bzero(res, sizeof(char) * (size + 1));
	return (res);
}
