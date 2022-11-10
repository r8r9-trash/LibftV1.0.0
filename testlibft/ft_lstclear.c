/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:11:27 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/10 11:41:10 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*elem;
	t_list	*next;
	
	elem = *lst;
	next = *elem;
	*lst = NULL;
	while (elem != NULL)
	{
		(*del)(*elem);
		free(elem);
		elem = next;
	}
}
