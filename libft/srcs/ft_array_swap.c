void	ft_array_swap(int *array, int i1, int i2)
{
	int		tmp;

	if (!array)
		return ;
	tmp = array[i1];
	array[i1] = array[i2];
	array[i2] = tmp;
}
