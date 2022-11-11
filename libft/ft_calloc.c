/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:57:27 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/11 13:30:06 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	size_t	total;
	char	*tab;
	
	total = nmemb * size;
	tab = malloc(total);
	if (tab == NULL || (nmemb * size) / nmemb != size)
		return (NULL);
	i = 0;
	while (i < total)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}
