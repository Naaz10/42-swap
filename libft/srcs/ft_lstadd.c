#include "libft.h"

/*
** Adds a new link at the beginning of the chain.
*/
void	ft_lstadd(t_list **alst, t_list *new)
{
	if (!new || !alst)
		return ;
	new->next = *alst;
	*alst = new;
}
