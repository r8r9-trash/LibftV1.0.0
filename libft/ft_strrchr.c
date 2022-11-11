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

    	while (s[i] != '\0')
        	i++;
    	while (s[i] != '\0')
    	{
        	if (s[i] == c)
            		return ((char *)s + i);
        	i--;
    	}
    	return (NULL);
}
