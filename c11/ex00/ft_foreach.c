void ft_putnbr(int nb);

void ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

int main(void)
{
	int tab[] = {1, 2, 3, 4, 5, 6};
	ft_foreach(tab, 6, ft_putnbr);
}

