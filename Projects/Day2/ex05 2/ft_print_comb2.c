/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
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

void	ft_print_comb2(void)
{
	int x;

	x = 0;
	while (x++ <= 9899)
	{
		if (x / 100 < x - x / 100 * 100)
		{
			ft_putchar('0' + x / 1000);
			ft_putchar('0' + x / 100 - x / 1000 * 10);
			ft_putchar(' ');
			ft_putchar('0' + x / 10 - x / 100 * 10);
			ft_putchar('0' + x - x / 10 * 10);
			if (x != 9899)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}




int		main(void)
{
	ft_print_comb2();
}