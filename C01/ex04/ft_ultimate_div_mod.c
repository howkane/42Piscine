void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;

	x = *a;
	*a = (*a) / (*b);
	*b = x % *b;
}