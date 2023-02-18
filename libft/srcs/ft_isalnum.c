#include "libft.h"

/*
** Returns true if the character is alphanumerical, false otherwise.
*/
int		ft_isalnum(int c)
{
	return((ft_isalpha(c) || ft_isdigit(c)));
}
