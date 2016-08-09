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

int	 ft_strlen(char *str)
{	
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}

int main()
{
	char *str;
	int a;

	str = "12345678901";
	a = ft_strlen(str);
	printf("%d", a);

}






































