/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 09:27:27 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/15 18:09:31 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *str, char charset)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && (str[i] == charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && (str[i] != charset))
			i++;
	}
	return (count);
}

static void	free_all(char **tab, int i)
{
	while (i > 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
	return ;
}

static void	attribute_word(const char *str, char set, char **tab, int l)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		len = 0;
		while (str[i] && str[i] == set)
			i++;
		while (str[i] && str[i] != set)
		{
			i++;
			len++;
		}
		if (j < l)
		{
			tab[j] = malloc(sizeof(char) * (len + 1));
			if (!(tab))
				free_all(tab, j - 1);
			j++;
		}
	}
}

static void	word_write(const char *str, char set, char **tab, int l)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		k = 0;
		while (str[i] && str[i] == set)
			i++;
		while (str[i] && str[i] != set)
		{
			tab[j][k] = str[i];
			k++;
			i++;
		}
		if (j < l)
		{
			tab[j][k] = 0;
			j++;
		}
	}
	tab[j] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		len;

	len = word_count(s, c);
	tab = malloc(sizeof(char *) * len);
	if (!tab)
		return (NULL);
	attribute_word(s, c, tab, len - 1);
	word_write(s, c, tab, len - 1);
	return (tab);
}
