/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:02:17 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/15 16:35:43 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (little[n] != '\0')
		n++;
	n--;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i + n < len)
	{
		if (big[i] == little[0] && (!ft_strncmp(big + i, little, n + 1)))
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
