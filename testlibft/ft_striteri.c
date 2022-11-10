/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:03:58 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/09 11:39:20 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*));
{
	unsigned int	i;
	
	i = 0;
	if (!s || !f)
		return (NULL);
	while (*s)
	{
		(*f)(i, s);
		i++;
		s++;
	}
}