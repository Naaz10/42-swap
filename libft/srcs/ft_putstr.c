#include "libft.h"

/*
** Writes the string on the standard output.
*/
void	ft_putstr(char const *s)
{
	if (!s)
		return ;
	write(1, s, ft_strlen(s));
}
