/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouz <adouz@1337.MA>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 15:02:38 by adouz             #+#    #+#             */
/*   Updated: 2018/10/21 18:54:07 by adouz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static char		*ft_delwhite(char *str, char const *s)
{
	int i;
	int j;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	j = 0;
	while (s[i] != '\0')
	{
		str[j] = s[i];
		i++;
		j++;
	}
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\0')
	{
		str[j] = '\0';
		j--;
		i--;
	}
	return (str);
}

static int		ft_size(char const *s)
{
	int i;
	int j;
	int c;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	j = 0;
	while (s[j] != '\0')
		j++;
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n' || s[j] == '\0')
		j--;
	c = 0;
	while (i < j)
	{
		c++;
		i++;
	}
	return (c + 2);
}

char			*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;

	if (s == 0)
		return (0);
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	j = 0;
	while (s[j] != '\0')
		j++;
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n' || s[j] == '\0')
	{
		j--;
		i++;
	}
	if (!(str = (char *)malloc(ft_size(s))))
		return (0);
	str = ft_delwhite(str, s);
	return (str);
}
