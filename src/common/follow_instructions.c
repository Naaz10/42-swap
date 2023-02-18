#include "common.h"
#include "libft.h"

static int		leninstr(char *instr)
{
	int		len;

	len = 0;
	while (instr && instr[len] && instr[len] != ' ')
		len++;
	return (len);
}

int				follow_instructions(t_piles *piles, t_fun *fun_list,
		char *instr, t_opt opt)
{
	int		i;
	int		instr_found;

	while (instr[0])
	{
		while (instr[0] == ' ')
			instr++;
		instr_found = 0;
		i = -1;
		while (!instr_found && fun_list[++i].instr)
			if (ft_strnequ(instr, fun_list[i].instr, leninstr(instr)))
			{
				fun_list[i].f(piles, opt);
				instr_found = 1;
			}
		if (!instr_found)
			return (0);
		instr += leninstr(instr);
	}
	return (1);
}
