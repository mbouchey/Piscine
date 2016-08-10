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

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src, unsigned int n)
{
	int len_src;
	int len_dest;
	int i;

	len_src = ft_strlen(src) - 1;
	len_dest = ft_strlen(dest) - 1;
	i = 0;
	if (n > len_dest)
		n = len_dest - 1;
	while (i <= len_dest && i <= len_src + 1)
	{
			dest[i] = src[i];
			i++;
	}
	return (dest);
}

int		main()
{
	char g[]="  ";
	char a[]="abcdefg";
	char b[]="hhhhhh";
	ft_strcpy(b, a, 7);
	ft_putstr(b);
	ft_putstr(g);
	char c[]="abcdefg";
	char d[]="hhhhhh";
	strncpy(d, c, 7);
	ft_putstr(d);
	

}

















