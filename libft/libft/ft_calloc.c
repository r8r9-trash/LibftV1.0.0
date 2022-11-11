/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:57:27 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/11 10:19:32 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	
	if ((nmemb = 0) || (size == 0))
		return (NULL);
	tab = malloc(sizeof(size) * nmemb);
	if (!tab)
		return (NULL);
	return(tab);
}
