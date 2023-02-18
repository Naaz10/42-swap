#include "libft.h"

/*
** Writes the string on the given file descriptor.
*/
void	ft_putstr_fd(char const *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
