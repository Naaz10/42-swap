#include "libft.h"

/*
** Returns the int form of the number in the string, or 0 if the string is not
** a number.
** Ignores starting spaces and ending characters which are not digits.
*/
int			ft_atoi(const char *s)
{
	unsigned long long	res;
	int					sign;

	if (!s)
		return (0);
	res = 0;
	sign = 1;
	while (*s && ft_iswhitespace(*s))
		s++;
	if (*s == '+')
		s++;
	else if (*s == '-')
	{
		sign = -1;
		s++;
	}
	while (*s && ft_isdigit(*s))
	{
		res = res * 10 + *s - '0';
		if (res > LLONG_MAX)
			return ((sign > 0) ? -1 : 0);
		s++;
	}
	return ((int)(res * sign));
}
