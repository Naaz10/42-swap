#include "libft.h"

/*
** Frees the string and sets the pointer to NULL.
*/
void	ft_strdel(char **as)
{
	if (!as)
		return ;
	free(*as);
	*as = NULL;
}
