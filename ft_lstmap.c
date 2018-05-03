/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vveselov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 15:52:49 by vveselov          #+#    #+#             */
/*   Updated: 2017/11/08 21:54:51 by vveselov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*head;

	if (!lst)
		return (NULL);
	if (!(new = malloc(sizeof(t_list))))
		return (NULL);
	new = f(lst);
	head = new;
	lst = lst->next;
	while (lst != NULL)
	{
		new->next = f(lst);
		new = new->next;
		lst = lst->next;
	}
	return (head);
}
