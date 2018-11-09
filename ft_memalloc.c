/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouz <adouz@1337.MA>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 21:00:54 by adouz             #+#    #+#             */
/*   Updated: 2018/10/19 17:04:43 by adouz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*ptr;

	if (!(ptr = (char *)malloc(size)))
		return (NULL);
	ft_memset(ptr, 0, size);
	return (ptr);
}
