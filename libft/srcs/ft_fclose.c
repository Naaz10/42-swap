#include "libft.h"

/*
** Closes the file descriptor and frees the buffer contained in the stream.
*/
int		ft_fclose(t_file **stream)
{
	if (!stream || !*stream)
		return (0);
	if (close((*stream)->fd) == -1)
		return (-1);
	free(*stream);
	*stream = NULL;
	return (0);
}
