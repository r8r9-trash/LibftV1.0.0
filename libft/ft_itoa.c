/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:34:25 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/12 17:15:18 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(int n)
{
	long long int	nb;
	int				len;

	len = 1;
	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb >= 10)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

static void	ft_calcul( int i, char *tab, long long int nb)
{
	while (nb >= 10)
	{
		tab[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	tab[i] = nb + '0';
}

char	*ft_itoa(int n)
{
	int				i;
	long long int	nb;
	char			*tab;

	nb = n;
	i = len(nb);
	tab = malloc(sizeof(char) * (i + 1));
	if (!tab)
		return (NULL);
	tab[i] = '\0';
	if (nb == 0)
	{
		tab[0] = '0';
		return (tab);
	}
	if (nb < 0)
	{
		tab[0] = '-';
		nb *= -1;
	}
	ft_calcul(i - 1, tab, nb);
	return (tab);
}
