/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouz <adouz@1337.MA>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:04:48 by adouz             #+#    #+#             */
/*   Updated: 2018/10/19 17:02:46 by adouz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_checkmax(unsigned char *s)
{
	int	i;
	int	check;

	check = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
			check += 1;
		i++;
	}
	return (check);
}

static int		ft_strtoint(unsigned char *s, int num, int j)
{
	int	i;

	i = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = (num * 10) + (s[i] - '0');
		i++;
	}
	if (j == 1)
		num *= -1;
	if (ft_checkmax(s) > 18)
	{
		if (j == 1)
			return (0);
		return (-1);
	}
	return (num);
}

int				ft_atoi(const char *str)
{
	int				i;
	int				num;
	int				j;
	unsigned char	*s;

	s = (unsigned char *)str;
	ft_checkmax(s);
	i = 0;
	num = 0;
	j = 0;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == '\r' || s[i] == '\f' ||
			s[i] == '\v' || s[i] == ' ')
		i++;
	if (s[i] == '+')
		i++;
	else if (s[i] == '-')
	{
		j = 1;
		i++;
	}
	num = ft_strtoint(&s[i], num, j);
	return (num);
}
