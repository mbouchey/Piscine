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

int ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}

int main()
{
	printf("%d\n", ft_find_next_prime(1956259845));
}