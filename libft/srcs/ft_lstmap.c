#include "libft.h"

/*
** Returns a new chained list composed of links which are copies of the links
** in the original list to which is applied the function.
*/
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *map_lst;

	map_lst = NULL;
	while (lst)
	{
		ft_lstappend(&map_lst, f(lst));
		lst = lst->next;
	}
	return (map_lst);
}
