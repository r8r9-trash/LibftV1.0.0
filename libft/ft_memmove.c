/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:44:21 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/11 10:09:31 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	const char *src1;
	unsigned char *dst1;
	size_t	i;

	src1 = src;
	dst1 = dst;
	i = 0;
	if (!src || !dst)
		return (NULL);
	if (dst > src)
	{
		i = n;
		while (i > 0)
		{
			dst1[i] = src1[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dst1[i] = src1[i];
			i++;
		}
	}
	return(dst);
}
