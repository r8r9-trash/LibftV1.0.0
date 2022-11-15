/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:44:21 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/14 12:16:18 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char		*src1;
	unsigned char	*dst1;

	src1 = src;
	dst1 = dest;
	if (src > dest)
	{
		while (n-- > 0)
			*dst1++ = *src1++;
	}
	else
	{	
		while (n > 0)
		{
			dst1[n - 1] = src1[n - 1];
			n--;
		}	
	}
	return (dest);
}
