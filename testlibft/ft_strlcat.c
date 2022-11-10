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
    size_t     i;
    size_t     j;

    i = 0;
    while (dst[i])
        i++;
    j = 0;
    while (src[j] && j < size)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = 0;
    return (i);
}
