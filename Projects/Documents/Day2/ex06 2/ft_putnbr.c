/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouchey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 19:52:06 by mbouchey          #+#    #+#             */
/*   Updated: 2016/08/04 23:37:19 by mbouchey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_putchar(char c);

void	ft_putnbr(int nbr)
{
	int x;

	x = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		x = nbr % 10;
		nbr = nbr / 10;
		ft_putnbr(nbr);
		ft_putchar('0' + x);
	}
	else
		ft_putchar('0' + nbr);
}

int		main(void)
{
	ft_putnbr(-10);
}
