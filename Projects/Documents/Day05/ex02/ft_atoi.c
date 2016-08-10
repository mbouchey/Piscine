/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouchey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 17:47:54 by mbouchey          #+#    #+#             */
/*   Updated: 2016/08/07 17:47:57 by mbouchey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int char_spec(char c)
{
	if (c == '\n')
		return (-1);
	else if (c == '\t')
		return (-1);
	else if (c == '\v')
		return (-1);
	else if (c == ' ')
		return (-1);
	else if (c == '\f')
		return (-1);
	else if (c == '\r')
		return (-1);
	else
		return(-2);

}

int convert_one_char(char c)
{
	if (c == '0')
		return(0);
	else if (c == '1')
		return(1);
	else if (c == '2')
		return(2);
	else if (c == '3')
		return(3);
	else if (c == '4')
		return(4);
	else if (c == '5')
		return(5);
	else if (c == '6')
		return(6);
	else if (c == '7')
		return(7);
	else if (c == '8')
		return(8);
	else if (c == '9')
		return(9);
	else
		return (-1);
}

int f_signe(int *i, char *str)
{
	int n;
	int signe;
	int j;

	j = *i;
	signe = 1;
	n = ft_strlen(str) - 1;
	while (++j < n && signe != -1)
		if (str[j] == '-')
			signe = -1;
	j = 0;
	while (j < n && char_spec(str[j]) == -1)
		j = j + 1;
	if (str[j] == '-' || str[j] == '+')
	{
		if(str[j] == '-')
			signe = -1;
		j = j + 1;
	}
	*i = j;	return(signe);
}

int	 ft_atoi(char *str)
{
	long nbr;
	int signe;
	int i;
	int *p_i;

	p_i = &i;
	signe = 1;
	nbr = 0;
	i = -1;
	signe = f_signe(p_i, str);
	while (convert_one_char(str[i]) >= 0 && convert_one_char(str[i]) <= 9)
	{
		nbr = nbr * 10 + convert_one_char(str[i]);
		i++;
	}
	if (nbr >= 9223372036854775807)
		return (-1);
	return (nbr * signe);
}
