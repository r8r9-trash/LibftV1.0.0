/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:36:37 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/15 17:53:25 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	size_t		len;
	size_t		length;
	char		*tab;

	start = 0;
	end = 0;
	len = ft_strlen(s1);
	length = len;
	if (!s1)
		return (NULL);
	while (s1[start] != '\0' && (is_set(s1[start], set)))
		start++;
	while (len > 1)
	{
		if (is_set(s1[len - 1], set))
			end++;
		else
			break ;
		len--;
	}
	tab = ft_substr(s1, start, (length - start - end));
	return (tab);
}
