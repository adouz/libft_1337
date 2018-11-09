/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouz <adouz@1337.MA>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 15:48:25 by adouz             #+#    #+#             */
/*   Updated: 2018/10/21 19:37:59 by adouz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_cwords(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 1;
	while (s[i++] == c)
		count = 1;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
		{
			if (s[i + 1] != c)
				count += 1;
			i++;
		}
		i++;
	}
	i = 0;
	while (s[i] != 0)
		i++;
	if (s[i - 1] == c)
		count -= 1;
	return (count);
}

static int		*ft_cchars(char const *s, char c, int *ai, int n)
{
	int i;
	int y;

	i = 0;
	while (s[i] == c)
		i++;
	y = 0;
	while (y++ < n)
	{
		ai[y] = 0;
	}
	y = 0;
	while (s[i] != '\0' && y < n)
	{
		while (s[i] != c && s[i] != '\0')
		{
			ai[y]++;
			i++;
		}
		if (s[i - 1] != c)
			y++;
		i++;
	}
	return (ai);
}

static char		**ft_tocopy(char const *s, char c, char **ar, int *ai)
{
	int i;
	int j;
	int a;

	i = 0;
	j = 0;
	while (s[j] != '\0' && i < ft_cwords(s, c))
	{
		while (s[j] == c)
			j++;
		a = 0;
		while (s[j] != c && a < ai[i])
		{
			ar[i][a] = s[j];
			a++;
			j++;
		}
		if (s[j - 1] != c)
		{
			ar[i][a] = '\0';
			i++;
		}
		j++;
	}
	return (ar);
}

static char		**ft_fornull(char **ar, int n)
{
	int		j;

	if (ar[n])
		ar[n] = NULL;
	j = 0;
	while (j < n)
	{
		if (ft_strlen(ar[j]) == 0)
			ar[j] = NULL;
		j++;
	}
	return (ar);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**ar;
	int		*ai;
	int		i;

	if (!s || !(ar = (char **)malloc((ft_cwords(s, c)) * sizeof(*ar))))
		return (NULL);
	ai = (int *)malloc((ft_cwords(s, c) + 1) * sizeof(*ai));
	ft_cchars(s, c, ai, ft_cwords(s, c));
	i = 0;
	while (i < ft_cwords(s, c))
	{
		ar[i] = (char *)malloc(ai[i] + 1);
		i++;
	}
	ft_tocopy(s, c, ar, ai);
	ft_fornull(ar, ft_cwords(s, c));
	return (ar);
}
