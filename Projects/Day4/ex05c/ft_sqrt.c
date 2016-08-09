#include <stdio.h>
#include <unistd.h>










int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (i * i < nb)
		i++;
	if(i * i == nb)
		return(i);
	else
		return(0);
}

int main()
{
	printf("%d", ft_sqrt(0));
}