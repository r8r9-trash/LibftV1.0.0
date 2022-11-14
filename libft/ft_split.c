/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 09:27:27 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/14 16:21:27 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char a, char b)
{
	if (b == a)
		return (1);
	return (0);
}

static int	word_count(const char *str, char charset)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_charset(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !is_charset(str[i], charset))
			i++;
	}
	return (count);
}

static char	*attribute_word(const char *str, char charset)
{
	int		i;
	int		j;
	char	*tab;

	i = 0;
	j = 0;
	while (str[i] != '\0' && !is_charset(str[i], charset))
	{
		i++;
		j++;
	}
	tab = malloc(sizeof(char) * (j + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (str[i] && !is_charset(str[i], charset))
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*tmp;
	int		len;
	int		i;

	len = word_count(s, c);
	len += 1;
	tab = malloc(sizeof(char *) * (len));
	if (!tab)
		return (NULL);
	i = 0;
	while (*s && i < len)
	{
		while (*s && is_charset(*s, c))
			s++;
		if (*s && !is_charset(*s, c))
		{
			tmp = attribute_word(s, c);
			tab[i] = tmp;
			i++;
			s = s + ft_strlen(tmp);
		}
	}
	tab[len] = NULL;
	return (tab);
}
