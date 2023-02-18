long double		ft_ldouble_power(long double n, int pow)
{
	if (pow == 0)
		return (1);
	if (pow > 0)
		return (n * ft_ldouble_power(n, pow - 1));
	if (pow < 0)
		return (n / ft_ldouble_power(n, pow + 1));
	return (0);
}
