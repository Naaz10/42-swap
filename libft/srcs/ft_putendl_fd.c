#include "libft.h"

/*
** Writes the string followed by a new line on the given file descriptor.
*/
void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
