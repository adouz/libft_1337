/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouz <adouz@1337.MA>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 15:25:07 by adouz             #+#    #+#             */
/*   Updated: 2018/10/20 21:08:56 by adouz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t		i;
	size_t		j;
	char		*str;

	str = (char *)h;
	if (len == 0)
		return (0);
	if (h == n)
		return (str);
	i = 0;
	while (h[i] != '\0' && i < len)
	{
		j = 0;
		while (n[j] != '\0' && i + j < len)
		{
			if (h[i + j] != n[j])
				break ;
			j++;
		}
		if (n[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
