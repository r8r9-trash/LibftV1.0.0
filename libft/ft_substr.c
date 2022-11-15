/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:58:14 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/15 17:55:30 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;

	i = 0;
	if (start >= ft_strlen(s))
	{
		str = malloc(1);
		if (!str)
			return (NULL);
		str[i] = '\0';
		return (str);
	}
	if (!s)
		return (NULL);
	if (len <= ft_strlen(s) - start)
		str = malloc(sizeof(char) * (len + 1));
	else
		str = malloc(sizeof(char) * (ft_strlen(s) - start) + 1);
	if (!str)
		return (NULL);
	while (start < ft_strlen(s) && i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
