#include "libft.h"

/*
** Write the content of the file on the standard output.
*/
void	ft_putfile(int fd)
{
	char	buf[BUFF_SIZE + 1];
	int		rval;

	rval = read(fd, buf, BUFF_SIZE);
	while (rval > 0)
	{
		buf[rval] = 0;
		ft_putstr(buf);
		rval = read(fd, buf, BUFF_SIZE);
	}
}
