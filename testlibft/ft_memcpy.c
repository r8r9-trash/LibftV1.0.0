/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:55:26 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/10 14:16:17 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*j;
	size_t	i;

	i = -1;
	p = (unsigned char*)dest;
	j = (unsigned char*)src;
	if ((dest == src) || n == 0)
	       return (dest);
	if (!dest && !src)
		return (dest);	
	while (j[i] != '0' && ++i < n)
		p[i] = j[i];
	return (dest);
}
