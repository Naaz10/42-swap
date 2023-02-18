#include "libft.h"

/*
** Returns the number of line of the file.
*/
int		ft_filelinecount(int fd)
{
	int		nblines;
	int		rval;
	char	buf[BUFF_SIZE + 1];
	int		i;

	if ((rval = read(fd, buf, BUFF_SIZE)) <= 0)
		return (0);
	buf[rval] = 0;
	nblines = 1;
	while (rval > 0)
	{
		i = -1;
		while (buf[++i])
			nblines += (buf[i] == '\n');
		rval = read(fd, buf, BUFF_SIZE);
	}
	return (nblines);
}
