/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouchey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 11:14:28 by mbouchey          #+#    #+#             */
/*   Updated: 2016/08/05 11:14:31 by mbouchey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c)
{
		write(1, &c, 1);
			return (0);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
	int *p;
	int a;


	p = &a;
	ft_ft(p);
	printf("%d", a);
}