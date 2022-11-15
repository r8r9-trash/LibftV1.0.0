/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:48:33 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/15 18:21:32 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*elem;
	t_list	*next;

	if (!*lst)
		return ;
	elem = *lst;
	while (elem != NULL)
	{
		next = elem->next;
		(*del)(elem->content);
		free(elem);
		elem = next;
	}
	*lst = NULL;
}
