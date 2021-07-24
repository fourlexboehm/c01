#include <unistd.h>
void	ft_swap(int *a, int *b)
{	
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}
/*
int	main(void)
{
	int	a;
	int b;
	int	*pa;
	int	*pb;

	a = 1;
	b = 2;
	pa = &a;
	pb = &b;
	ft_swap(pa, pb);
	if	(a == 2 && b == 1)
		write (1, "P", 1);
	else if  (a == 1 && b == 2)
		write (1, "F", 1);
	else
		write (1, "?", 1);
	return (0);
}
*/
