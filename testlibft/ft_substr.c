/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:58:14 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/10 14:45:19 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	int	i;
	
	i = 0;
	str = malloc(sizeof(char) * len);
	if (!str)
		return(0);
	while(*s != '\0' && len > 0)
	{
		str[i] = s[start];
		start++;
		len--;
		i++;
	}
	return (str);
}

/*int main()
{
	char const *tab = " Hello world";

	printf("%s\n", ft_substr(tab, 3, 5));
}*\

