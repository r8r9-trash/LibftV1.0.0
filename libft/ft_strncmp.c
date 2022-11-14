/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 09:58:00 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/12 19:03:15 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i + 1 < n)
	{
		if (s1[i] != s2[i])
			return (((unsigned char)s1[i]) - (unsigned char)s2[i]);
		i++;
	}
	return (((unsigned char)s1[i]) - (unsigned char)s2[i]);
}
