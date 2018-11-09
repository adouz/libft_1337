/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouz <adouz@1337.MA>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 17:56:06 by adouz             #+#    #+#             */
/*   Updated: 2018/10/19 21:19:19 by adouz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strrev(char *str)
{
	char		*rev;
	size_t		i;
	size_t		j;

	if (!(rev = (char *)malloc(strlen(str) + 1)))
		return (NULL);
	i = ft_strlen(str) - 1;
	j = 0;
	while (i < ft_strlen(str))
	{
		rev[j] = str[i];
		j++;
		i--;
	}
	rev[j] = '\0';
	return (rev);
}
