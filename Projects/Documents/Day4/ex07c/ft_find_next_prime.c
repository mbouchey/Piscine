#include <stdio.h>
#include <unistd.h>










int	ft_is_prime(int nb)
{
	int	i;
	int	prime;

	prime = 1;
	i = 2;
	if (nb == 2)
		return (1);
	if (nb % 2 == 0 || nb < 2)
		return (0);
	while (i < nb && prime == 1)
	{
		if (nb % i == 0)
			prime--;
		i++;
	}
	return (prime);
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