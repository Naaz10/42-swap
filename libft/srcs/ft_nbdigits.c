int		ft_nbdigits(int nb)
{
	int				res;
	unsigned int	unsigned_nb;

	unsigned_nb = (nb < 0) ? -nb : nb;
	res = 1;
	while (unsigned_nb >= 10)
	{
		res++;
		unsigned_nb /= 10;
	}
	return (res);
}
