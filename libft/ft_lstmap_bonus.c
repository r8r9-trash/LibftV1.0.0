/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:49:41 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/15 18:23:29 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*src;
	t_list	*last;

	new = ft_lstnew(f(lst->content));
	if (!new)
		return (NULL);
	src = lst->next;
	while (src != NULL)
	{
		last = ft_lstnew((*f)(src->content));
		if (!last)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, last);
		src = src->next;
	}
	return (new);
}
