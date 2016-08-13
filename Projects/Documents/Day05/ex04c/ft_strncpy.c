#include <unistd.h>
#include <string.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		ft_putchar(str[i]);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main()
{
	char g[]="  ";

	char a[]="abcdefg";
	char b[]="hhhhhh";
	ft_strncpy(b, a, 8);
	ft_putstr(b);

	ft_putstr(g);

	char c[]="abcdefg";
	char d[]="hhhhhh";
	strncpy(d, c, 7);
	//ft_putstr(d);

	

}

















