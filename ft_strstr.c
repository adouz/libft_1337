/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouz <adouz@1337.MA>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:49:25 by adouz             #+#    #+#             */
/*   Updated: 2018/10/19 13:48:33 by adouz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*str;

	str = (char *)s1;
	i = 0;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (str[i + j] != s2[j])
				break ;
			j++;
		}
		if (s2[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
