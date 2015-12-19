/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acovaciu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 15:03:25 by acovaciu          #+#    #+#             */
/*   Updated: 2015/11/07 15:11:50 by acovaciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;
	t_list	*list_new;

	list = f(lst);
	list_new = list;
	if (list_new == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		list->next = (*f)(lst);
		if (list->next == NULL)
			return (NULL);
		list = list->next;
	}
	return (list_new);
}
