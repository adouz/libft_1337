/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouz <adouz@1337.MA>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 21:48:26 by adouz             #+#    #+#             */
/*   Updated: 2018/10/19 17:54:46 by adouz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *tmp;

	tmp = *alst;
	while (tmp != NULL)
	{
		*alst = tmp;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		tmp = (*alst)->next;
		*alst = NULL;
	}
}
