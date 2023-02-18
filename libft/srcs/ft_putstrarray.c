#include "libft.h"

/*
** Writes a NULL terminated array of string on the stardard output. Each string
** is separated by a newline.
*/
void	ft_putstrarray(const char **str)
{
	if (!str)
		return ;
	while (*str)
	{
		ft_putendl(*str);
		str++;
	}
}
