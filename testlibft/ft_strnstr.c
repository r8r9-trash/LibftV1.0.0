/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:02:17 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/10 16:52:53 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t n;
    
    i = 0;
    n = 0;
    while (little[n] != '\0')
        n++;
    n -= 1;
    if (!little)
        return (big);
    while (big[i] != '\0' && i < len)
    {
        if (big[i] == little[0] && ft_strncmp(big, little, n))
            return(big[i]);
        i++;
    }
    return (NULL);
}
