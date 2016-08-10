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

int main()
{
	int i;
	i=-1;
	while(i++!=100)
	{
	printf("%d", i);
	printf("%s", " ");
	printf("%d\n", ft_is_prime(i));
}
}