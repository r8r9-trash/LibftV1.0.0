/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:45:55 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/10 14:19:39 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		slen;
	size_t		dlen;
	size_t		i;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	i = 0;
	while ((src[i] != '\0') && (i < size - dlen))
	{
		dst[i + dlen] = src[i];
		i++;
	}
	if (size > dlen + i)
		dst[i + dlen] = '\0';
	else
		dst[i + dlen - 1] = '\0';
	return (slen + dlen);	
}
