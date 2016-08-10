#include <stdio.h>
#include <unistd.h>










int	ft_fibonacci(int nb)
{
	if (nb < 0)
		return (-1);
	else if (nb == 0)
		return (0);
	else if (nb <= 2)
		return (1);
	else
		return ft_fibonacci(nb - 1) + ft_fibonacci(nb - 2);
}

int main()
{
	int i=25;
	printf("%d\n", ft_fibonacci(i));
	return(0);
}