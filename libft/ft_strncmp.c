/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 09:58:00 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/15 17:41:12 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s1[i] != '\0'
		&& (unsigned char)s2[i] != '\0' && i + 1 < n)
	{
		if (((unsigned char)s1[i]) != ((unsigned char)s2[i]))
			return (((unsigned char)s1[i]) - (unsigned char)s2[i]);
		i++;
	}
	return (((unsigned char)s1[i]) - (unsigned char)s2[i]);
}
