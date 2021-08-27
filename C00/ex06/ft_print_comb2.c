void	my_func(char c)
{
	write(1, &c, 1);
}

void	my_function(int i)
{
	int	o;

	o = '0' + (i / 10);
	my_func(o);
	i = '0' + (i % 10);
	my_func(i);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			my_function(x);
			my_func(' ');
			my_function(y);
			if (x < 98 || y < 99)
			{
				my_func(',');
				my_func(' ');
			}
			y++;
		}
		x++;
	}
}