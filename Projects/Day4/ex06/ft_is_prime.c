/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouchey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 22:00:36 by mbouchey          #+#    #+#             */
/*   Updated: 2016/08/09 22:00:39 by mbouchey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int i;
	int prime;
	int max;

	prime = 2;
	max = nb / 2 + 1;
	i = 1;
	while (i < nb / i && prime != 0)
	{
		if (nb % i == 0)
			prime--;
		i++;
	}
	if (prime == 2)
		return (0);
	return(prime);
}
