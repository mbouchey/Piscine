#include <stdio.h>
#include <unistd.h>










int		ft_iterative_factorial(int nb)
{
	int i;
	int res;

	i = 0;
	res = 1;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (i++ < nb)
			res = res * i;
		return (res);
	}
}

int main()
{
	
	printf("%d", ft_iterative_factorial(8));

}