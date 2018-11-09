/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouz <adouz@1337.MA>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 18:39:22 by adouz             #+#    #+#             */
/*   Updated: 2018/10/21 18:41:14 by adouz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_delwhite(char *str, char const *s, char c)
{
	int i;
	int j;

	i = 0;
	while (s[i] == c || s[i] == '\n')
		i++;
	j = 0;
	while (s[i] != '\0')
	{
		str[j] = s[i];
		i++;
		j++;
	}
	while (s[i] == c || s[i] == '\0')
	{
		str[j] = '\0';
		j--;
		i--;
	}
	return (str);
}

static int		ft_size(char const *s, char c)
{
	int i;
	int j;
	int count;

	i = 0;
	while (s[i] == c)
		i++;
	j = 0;
	while (s[j] != '\0')
		j++;
	while (s[j] == c || s[j] == '\0')
		j--;
	count = 0;
	while (i < j)
	{
		count++;
		i++;
	}
	return (count + 2);
}

char			*ft_strtrimc(char const *s, char c)
{
	char	*str;
	int		i;
	int		j;

	if (s == 0)
		return (0);
	i = 0;
	while (s[i] == c)
		i++;
	j = 0;
	while (s[j] != '\0')
		j++;
	while (s[j] == c || s[j] == '\0')
	{
		j--;
		i++;
	}
	if (!(str = (char *)malloc(ft_size(s, c))))
		return (0);
	str = ft_delwhite(str, s, c);
	return (str);
}
