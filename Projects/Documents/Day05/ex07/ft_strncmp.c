/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouchey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 04:25:16 by mbouchey          #+#    #+#             */
/*   Updated: 2016/08/14 04:25:18 by mbouchey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while (i <= n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i] && s1[i] != '\0' && s2[i] != '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
