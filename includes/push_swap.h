#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "common.h"

# define ASCENDING 1
# define DESCENDING 0

int		find_instructions(t_piles piles, t_fun *fun_list, t_opt opt);
int		quick_sort_a(t_piles *piles, t_fun *fun_list, int len, t_opt opt);
int		quick_sort_b(t_piles *piles, t_fun *fun_list, int len, t_opt opt);
int		is_sorted(int *pile, int len, int order);
void	sort_3(t_piles *piles, t_fun *fun_list, int len, t_opt opt);
void	push_sort_3(t_piles *piles, t_fun *fun_list, int len, t_opt opt);
int		get_mediane(int *mediane, int *pile, int len);
void	reg_quick_sort(int *array, int len);

#endif