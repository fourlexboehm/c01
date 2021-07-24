#include <unistd.h>

void	ft_div_mod( int *a, int *b)
{
	int	mod;
	int	div;

	mod = *a % *b;
	div = *a / *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	
	a = 234;
	b = 142;
	printf("A is: %d\n B is: %d\n", a, b);
	ft_div_mod(&a, &b);
	printf("A is: %d\n B is: %d\n", a, b);
	return (0);
}
*/
