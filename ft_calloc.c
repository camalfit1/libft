/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camalfit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:26:51 by camalfit          #+#    #+#             */
/*   Updated: 2024/03/05 15:19:42 by camalfit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*i;
	size_t			c;

	c = 0;
	if (size != 0 && nmemb > ((size_t) - 2 / size))
		return (NULL);
	i = malloc(nmemb * size);
	if (i == NULL)
		return (NULL);
	while (c < (nmemb * size))
	{
		i[c] = 0;
		c++;
	}
	return (i);
}
