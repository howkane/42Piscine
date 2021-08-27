void	ft_rev_int_tab(int tab, int size)
{
	int	x;
	int	res;

	x = 0;
	while (x  == (size / 2))
	{
		res = tab[x];
		tab[x] = tab[size - x - 1];
		tab[size - x - 1] = res;
		x++;
	}
}