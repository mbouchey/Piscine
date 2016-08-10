#include <stdio.h>
#include <unistd.h>










int	ft_is_prime(int nb)
{
	unsigned int i;
	int prime;
	int max;

	prime = 2;
	max = nb / 2 + 1;
	i = 1;
	while (i < nb / i && prime != 0)
	{
		if (nb % i == 0)
			prime--;
		i++;
	}
	if (prime == 2)
		return (0);
	return(prime);
}

int main()
{
	printf("%d\n", ft_is_prime(49999));
}