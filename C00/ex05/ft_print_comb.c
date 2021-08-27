void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = '0' - 1;
	while (x++ < '7')
	{
		y = x;
		while (y++ < '8')
		{
			z = y;
			while (z++ < '9')
			{
				ft_putchar(x);
				ft_putchar(y);
				ft_putchar(z);
				if (x != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}