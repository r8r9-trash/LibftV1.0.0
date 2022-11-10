/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:57:27 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/08 12:27:37 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	
	if ((nmemb = 0) || (size == 0))
		return (NULL);
	tab = malloc(sizeof(size) * nmemb);
	if (!tab)
		return (NULL);
	return(tab);
}

/*int	main()
{
	size_t a = 5;
	size_t b = 4;

	printf("%p\n", ft_calloc(a, b));
	printf("%p", calloc(a, b));
}*\
