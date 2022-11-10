/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:44:58 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/10 14:42:47 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char    *p1;
    unsigned char    *p2;
    size_t  i;

    p1 = (unsigned char *)s1;
    p2 = (unsigned char *)s2;
    i = 0;
    if (n == 0)
        return (0);
    while (p1[i] != '\0' && i < n)
    {
        if(p1[i] != p2[i])
            return (p1[i] - p2[i]);
        i++;
    }
    return(0);
}
