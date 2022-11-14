/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:36:37 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/14 18:19:58 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isset(char c, char const *set)
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
	size_t		i;
	size_t		j;
	size_t		len;
	char		*tab;

	i = 0;
	j = 0;
	len = 0;
	if (!s1)
		return (NULL);
	while (s1[i] != '\0')
		i++;
	len = i;
	i = 0;
	while (isset(s1[i], set))
		i++;
	while (isset(s1[len], set))
		len--;
	tab = malloc(sizeof(char) * (len - i + 1));
	if (!tab)
		return (NULL);
	while (i < len)
		tab[j++] = s1[i++];
	tab[j] = '\0';
	return (tab);
}
