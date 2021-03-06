/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouchey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 21:37:01 by mbouchey          #+#    #+#             */
/*   Updated: 2016/08/15 21:44:20 by mbouchey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int nb;
	int i;

	i = 0;
	nb = 0;
	while (dest[nb] != '\0')
		nb++;
	while (src[i])
	{
		dest[nb] = src[i];
		nb++;
		i++;
	}
	dest[nb] = '\0';
	return (dest);
}
