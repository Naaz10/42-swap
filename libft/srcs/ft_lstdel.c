#include "libft.h"

/*
** Deletes the chained list.
*/
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*cache;

	if (!*alst)
		return ;
	while ((*alst)->next)
	{
		cache = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = cache;
	}
	ft_lstdelone(alst, del);
}
