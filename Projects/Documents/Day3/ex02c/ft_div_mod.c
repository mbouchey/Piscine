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

void ft_swap(int *a, int *b)
{	
	int c;

	c = *b;
	*b = *a;
	*a = c;
}

int main()
{
	int c;
	int d;

	int *pc;
	int *pd;

	c = 1;
	d = 2;

	pc = &c;
	pd = &d;

	printf("%d", c);
	printf("%d", d);
	printf("%d", 0);
	ft_swap(pc, pd);
	printf("%d", c);
	printf("%d", d);
}






































