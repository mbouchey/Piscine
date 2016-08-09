/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouchey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 15:03:35 by mbouchey          #+#    #+#             */
/*   Updated: 2016/08/07 15:03:38 by mbouchey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c)
{
		write(1, &c, 1);
			return (0);
}

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int c;
	int d;

	int *pc;
	int *pd;

	pc = &c;
	pd = &d;
	ft_div_mod(11, 3, pc, pd);
	printf("%d", c);
	printf("%d", d);
}






































