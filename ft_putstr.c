/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouz <adouz@1337.MA>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 00:48:15 by adouz             #+#    #+#             */
/*   Updated: 2018/10/21 17:36:19 by adouz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int		i;
	char	c;

	if (s == 0)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		c = (char)s[i];
		ft_putchar(c);
		i++;
	}
}