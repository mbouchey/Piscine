/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouchey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 15:00:11 by mbouchey          #+#    #+#             */
/*   Updated: 2016/08/06 15:00:15 by mbouchey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
