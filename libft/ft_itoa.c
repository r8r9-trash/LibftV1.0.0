/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:34:25 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/10 15:27:41 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(int nb)
{
	long int	len;
	int	tmp;

	len = 1;
	tmp = nb;
	if (tmp < 0)
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

char	*ft_itoa(int n)
{
	int	i;
	long int	nb;
	char	*tab;

	nb = n;
	i = len(nb);
	tab = malloc(sizeof(char) * (i + 1));
	if (!tab)
		return (NULL);
	tab[i] = '\0';
	i--;
	if (nb == 0)
	{
		tab[0] = 48;
		return (tab);
	}
	if (nb < 0)
	{
		tab[0] = '-';
		nb *= -1;
	}
	while (nb >= 10)
	{
		tab[i] = (nb % 10) + '0';
		nb /= 10;
		i--;
	}
	tab[i] = nb + '0';
	return (tab);
}
