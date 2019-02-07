/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 17:29:49 by sarbaill          #+#    #+#             */
/*   Updated: 2019/01/04 18:03:09 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tmp;
	t_list *save;
	t_list *new;

	tmp = f(lst);
	if (!lst || !f)
		return (NULL);
	if (!(new = ft_lstnew(tmp->content, tmp->content_size)))
		return (NULL);
	save = new;
	lst = lst->next;
	while (lst != NULL)
	{
		tmp = f(lst);
		if (!(new->next = ft_lstnew(tmp->content, tmp->content_size)))
			return (NULL);
		new = new->next;
		lst = lst->next;
	}
	return (save);
}
