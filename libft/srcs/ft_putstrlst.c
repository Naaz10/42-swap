#include "libft.h"

/*
** Prints the content of the links of a chained list, separated by a newline.
*/
void	ft_putstrlst(t_list *lst)
{
	if (!lst)
		return ;
	write(1, lst->content, lst->content_size);
	ft_putchar('\n');
	ft_putstrlst(lst->next);
}
