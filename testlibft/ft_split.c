/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 09:27:27 by tbelleng          #+#    #+#             */
/*   Updated: 2022/08/29 16:14:56 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char a, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == a)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	word_count(char *str, char *charset)
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

char	*attribute_word(char *str, char *charset)
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
	tab = malloc(sizeof(char) * j + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (str[i] && !is_charset(str[i], charset))
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = 0;
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	char	*s;
	int		len;
	int		i;

	len = word_count(str, charset);
	tab = malloc(sizeof(char *) * len + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (*str && i < len)
	{
		while (*str && is_charset(*str, charset))
			str++;
		if (*str && !is_charset(*str, charset))
		{
			s = attribute_word(str, charset);
			tab[i] = malloc(sizeof(char) * ft_strlen(s) + 1);
			tab[i] = s;
			i++;
			str = str + ft_strlen(s);
		}
	}
	tab[len] = NULL;
	return (tab);
}
