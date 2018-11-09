/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouz <adouz@1337.MA>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 23:27:21 by adouz             #+#    #+#             */
/*   Updated: 2018/10/21 17:48:59 by adouz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlst;
	t_list	*tmp;
	t_list	*t;

	if (!lst || !(*(*f)))
		return (NULL);
	tmp = NULL;
	newlst = f(lst);
	t = newlst;
	if (lst->next)
		tmp = lst->next;
	while (tmp)
	{
		newlst->next = f(tmp);
		tmp = tmp->next;
		newlst = newlst->next;
	}
	newlst->next = NULL;
	return (t);
}
