/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouchey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 21:37:01 by mbouchey          #+#    #+#             */
/*   Updated: 2016/08/15 21:59:09 by mbouchey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src, int nb)
{
	int nb_c;
	int i;

	i = 0;
	nb_c = 0;
	while (dest[nb_c] != '\0')
		nb_c++;
	while (src[i] && i < nb)
	{
		dest[nb_c] = src[i];
		nb_c++;
		i++;
	}
	dest[nb_c] = '\0';
	return (dest);
}
