/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:59:09 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/10 15:24:07 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char const *s1, char const s2)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	count_alloc(int size, char **strs, char *sep)
{
	int	i;
	int	r;
	int	sepl;

	i = 0;
	r = 0;
	sepl = ft_strlen(sep);
	while (i < size)
	{
		r = r + ft_strlen(strs[i]);
		if (i != size - 1)
			r = r + sepl;
		i++;
	}
	return (r + 1);
}	

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*tab;

	tab = malloc(sizeof(char) * count_alloc(size, strs, sep));
	if (!tab)
		return (NULL);
	tab[0] = 0;
	if (size == 0)
	{
		return (tab);
	}
	i = 0;
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i != size - 1)
			ft_strcat(tab, sep);
		i++;
	}
	tab[ft_strlen(tab)] = 0;
	return (tab);
}
