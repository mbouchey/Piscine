/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouchey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 06:37:18 by mbouchey          #+#    #+#             */
/*   Updated: 2016/08/08 06:37:27 by mbouchey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		ref;

	ref = 0;
	i = -1;
	j = 0;
	while (str[ref] != '\0' && to_find[j] != '\0')
	{
		while (str[i] != '\0')
		{
			i++;
			if (to_find[j] == '\0')
				return (&str[ref]);
			if (str[i] == to_find[j])
				j++;
			else
				break ;
		}
		ref++;
		i = ref - 1;
		j = 0;
	}
	return (NULL);
}
