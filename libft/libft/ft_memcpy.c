/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:55:26 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/11 10:03:26 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*src1;
	char	*dest1;
	size_t	i;

	i = -1;
	src1 = src;
	dest1 = dest;
	if ((dest == src) || n == 0)
	       return (dest);
	if (!dest && !src)
		return (dest);	
	while (src1[i] != '0' && ++i < n)
		dest1[i] = src1[i];
	return (dest);
}
