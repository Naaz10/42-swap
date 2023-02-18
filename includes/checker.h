#ifndef CHECKER_H
# define CHECKER_H

# include "common.h"

void	usage(void);
void	checker(t_piles piles);
void	get_instr(char **instr, t_file *stream);
int		instr_check(char *instr, t_fun *fun_list);

#endif
