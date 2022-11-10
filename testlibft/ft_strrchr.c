/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:42:57 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/10 14:21:57 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int     i;
    int     k;
    char    *p;

    p = (char*)s;
    i = 0;
    k = c;
    while (p[i] != '\0')
        i++;
    i-= 1;
    while (p[i] != '\0')
    {
        if (p[i] == k)
            return (&p[i]);
        i--;
    }
    return (NULL);
}
