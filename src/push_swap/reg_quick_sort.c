static int	part(int *array, int len)
{
	int		iinf;
	int		isup;
	int		tmp[len];
	int		i;

	iinf = 0;
	isup = len - 1;
	i = -1;
	while (++i < len - 1)
		if (array[i] > array[len - 1])
			tmp[isup--] = array[i];
		else
			tmp[iinf++] = array[i];
	tmp[iinf] = array[len - 1];
	i = -1;
	while (++i < len)
		array[i] = tmp[i];
	return (iinf);
}

void		reg_quick_sort(int *array, int len)
{
	int		i;

	if (len < 2)
		return ;
	i = part(array, len);
	if (i)
		reg_quick_sort(array, i);
	if (i != len - 1)
		reg_quick_sort(array + i + 1, len - i - 1);
}
