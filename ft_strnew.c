/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouz <adouz@1337.MA>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 22:00:07 by adouz             #+#    #+#             */
/*   Updated: 2018/10/20 16:44:08 by adouz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	size += 1;
	if (!(str = (char *)malloc(size * sizeof(*str))))
		return (NULL);
	ft_memset(str, 0, size);
	return (str);
}
