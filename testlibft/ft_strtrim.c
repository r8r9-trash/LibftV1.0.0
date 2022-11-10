/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:36:37 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/10 15:24:48 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	isset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if(set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	len;
	char	*tab;

	i = 0;
	j = 0;
	len = 0;
	while (s1[i] != '\0')
		i++;
	len = i;
	
	i = 0;
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	while (isset(s1[i], set))
		i++;
	while (isset(s1[len - 1], set))
		len--;
	while (i < len)
		{
			tab[j] = s1[i];
			i++;
			j++;
		}	
	return (tab);
}
/*int	main()
{
	char const *a = "------Hello-rdrd-World--";
	char const *b = "--";

	printf("%s\n", ft_strtrim(a, b));
}*\
