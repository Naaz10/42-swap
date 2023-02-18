#include "libft.h"

/*
** Frees the strings of a NULL terminated array of strings and frees the array.
*/
void	ft_tabdel(char ***tab)
{
	char **		cache;

	if (!tab)
		return ;
	cache = *tab;
	while (*cache)
	{
		free(*cache);
		cache++;
	}
	free(*tab);
	*tab = NULL;
}
Footer
