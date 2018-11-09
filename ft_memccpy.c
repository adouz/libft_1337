/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouz <adouz@1337.MA>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 14:31:42 by adouz             #+#    #+#             */
/*   Updated: 2018/10/19 13:33:23 by adouz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	q;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	q = c;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == q)
			return (&d[i + 1]);
		i++;
	}
	return (0);
}
