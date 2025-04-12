#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *result;

	result = (int *)malloc(sizeof(int) * length);
	if (result == NULL)
		return (NULL);

	i = 0;
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}

int times2(int nb)
{
	return (nb * 2);
}

int square(int nb)
{
	return (nb * nb);
}

int main(void)
{
	int tab[] = {1, 2, 3, 4, 5};

	int *tab2;
	tab2 = ft_map(tab, 5, square);

	for (int i = 0; i < 5; i++)
		printf("%d\n", tab2[i]);

	free(tab2);
}


