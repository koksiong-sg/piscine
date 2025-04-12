#include <stdio.h>

int check_non_zero(char *str)
{
	while (*str != '\0')
	{
		if (*str != 0)
			return (1);
		str++;
	}
	return (0);
}

int	ft_any(char **tab, int (*f)(char*))
{
	while (*tab)
	{
		if (f(*tab) != 0)
			return (1);
		tab++;
	}
	return (0);
}

int main(void)
{
	char *tab = "abcdefeg0";
	printf("%d\n", ft_any(&tab, check_non_zero));
}
