#include "libft.h"

/*
** Returns the next character of the file associated to the stream, or -1 if
** the stream doesn't exist, the read fails, or the EOF has been reached.
** Increments the iterator of the stream.
*/
int		ft_fgetc(t_file *stream)
{
	int				rval;

	if (!stream)
		return (-1);
	if (!stream->buf[stream->i])
	{
		stream->i = 0;
		if ((rval = read(stream->fd, stream->buf, BUFF_SIZE)) <= 0)
		{
			stream->buf[0] = 0;
			return (-1);
		}
		stream->buf[rval] = 0;
	}
	return((int)stream->buf[stream->i++]);
}
