#include <unistd.h>
void	ft_div_mod( int a, int b, int *div, int *mod )
{	
	*mod = a % b;
	*div = a / b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	mod;
	int	div;
	
	a = 30;
	b = 15;

	ft_div_mod(a, b, &div, &mod);
	if	(div == 2 && mod == 0)
		write (1, "P", 1);
	else
		write (1, "F", 1);
	return (0);
}
*/
