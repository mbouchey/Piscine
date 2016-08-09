/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouchey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 17:27:13 by mbouchey          #+#    #+#             */
/*   Updated: 2016/08/07 17:27:16 by mbouchey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c)
{
		write(1, &c, 1);
			return (0);
}

void ft_putstr(char *str)
{	
	int i;

	i = -1;
	while (str[i++] != '\0')
		ft_putchar(str[i]);
}

int main()
{
	char *str;

	str = "797oapf3jsbwuuwyi2vfnn85";
	ft_putstr(str);
}






































