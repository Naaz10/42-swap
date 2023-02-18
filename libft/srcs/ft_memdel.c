#include "libft.h"

/*
** Frees the pointer and sets it to NULL.
*/
void	ft_memdel(void **ap)
{
	if (!ap)
		return ;
	free(*ap);
	*ap = NULL;
}
