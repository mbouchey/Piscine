/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouchey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 22:16:45 by mbouchey          #+#    #+#             */
/*   Updated: 2016/08/08 22:16:47 by mbouchey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}