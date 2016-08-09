/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouchey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 17:47:54 by mbouchey          #+#    #+#             */
/*   Updated: 2016/08/07 17:47:57 by mbouchey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c)
{
		write(1, &c, 1);
			return (0);
}

void	t_putstr(char *str)
{
	int i;

	i = -1;
	while (str[i++] != '\0')
		ft_putchar(str[i]);
}


int		ft_strlen(char *str)
{	
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}

void	ft_swap(char *a, char *b)
{
	char c;

	c = *b;
	*b = *a;
	*a = c;
}

char	*ft_strrev(char *str)
{
	int i;
	int length;
	char c;

	i = 0;
	length = ft_strlen(str) - 1;

	while (i < length)
	{
		c = str[i];
		str[i] = str[length];
		str[length] = c;
		i++;
		length--;
	}
	return (str);

}


int main()
{
	char str[]="test de la chaine";
	ft_strrev(str);
	printf("%s\n", str);
	return (0);
	//printf("%d", a);

}






































