#include "libft.h"

/*
** Adds the given link at the end of the chained list.
*/
void	ft_lstappend(t_list **lst, t_list *link)
{
	t_list *cache;

	if (!lst)
		return ;
	if (!*lst)
		*lst = link;
	else
	{
		cache = *lst;
		while (cache->next)
			cache = cache->next;
		cache->next = link;
	}
}
