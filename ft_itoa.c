/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouz <adouz@1337.MA>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:00:26 by adouz             #+#    #+#             */
/*   Updated: 2018/10/21 17:48:31 by adouz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_rev(char *rev, int size)
{
	char	tmp;
	char	*str;
	int		i;
	int		j;

	str = (char *)malloc((size + 1) * sizeof(*rev));
	i = 0;
	while (rev[i] != '\0')
		i++;
	j = 0;
	i -= 1;
	while (j < size)
	{
		tmp = rev[i];
		rev[i] = str[j];
		str[j] = tmp;
		i--;
		j++;
	}
	str[j] = '\0';
	return (str);
}

static char		*ft_cpintoa(char *rev, int n, int size)
{
	int	i;
	int	num;
	int	sign;

	sign = 0;
	if (n < 0)
	{
		n = -n;
		sign = 1;
	}
	i = 0;
	while (i < size)
	{
		num = n % 10;
		rev[i] = '0' + num;
		n = n / 10;
		i++;
	}
	if (sign == 1)
		rev[i - 1] = '-';
	rev[i] = '\0';
	return (rev);
}

static char		*ft_minmax(char *rev, int n, int size)
{
	int i;
	int num;

	i = 0;
	n = (n + 1) * -1;
	i = 0;
	while (i < size)
	{
		num = n % 10;
		rev[i] = '0' + num;
		n = n / 10;
		i++;
	}
	rev[0] = '8';
	rev[i - 1] = '-';
	rev[i] = '\0';
	return (rev);
}

char			*ft_itoa(int n)
{
	int		size;
	char	*rev;
	int		x;

	x = n;
	size = 0;
	if (n == 0)
		size = 1;
	while (x)
	{
		x = x / 10;
		size++;
	}
	if (n < 0)
		size += 1;
	if (!(rev = (char *)malloc((size + 2) * sizeof(*rev))))
		return (NULL);
	if (n == -2147483648)
		ft_minmax(rev, n, size);
	else
		ft_cpintoa(rev, n, size);
	return (ft_rev(rev, size));
}
