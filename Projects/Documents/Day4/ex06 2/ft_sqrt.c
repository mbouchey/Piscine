#include <stdio.h>
#include <unistd.h>










int	ft_is_prime(int nb)
{
	int i;

	if (nb <= 1 || nb / 2 == 0 && nb != 2)
		return (0);
	else
		return (1);

}

int main()
{
	printf("%d", ft_is_prime(0));
}