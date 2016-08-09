/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouchey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 16:06:37 by mbouchey          #+#    #+#             */
/*   Updated: 2016/08/07 16:06:44 by mbouchey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c)
{
		write(1, &c, 1);
			return (0);
}

void ft_ultimate_div_mod(int *a, int *b)
{	
	int tampon_mod;

	tampon_mod = *a % *b;
	*a = *a / *b;
	*b = tampon_mod;
}

int main()
{
	int a;
	int b;

	int *pa;
	int *pb;

	a = 11;
	b = 3;
	pa = &a;
	pb = &b;
	ft_ultimate_div_mod(pa, pb);
	printf("%d", a);
	printf("%d", b);
}






































