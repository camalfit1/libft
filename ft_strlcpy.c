/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camalfit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:14:13 by camalfit          #+#    #+#             */
/*   Updated: 2024/03/01 15:05:54 by camalfit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	c;

	c = 0;
	if (size == 0)
	{
		while (src[c])
			c++;
		return (c);
	}
	while (c < size - 1 && src[c] != '\0')
	{
		dst[c] = src[c];
		c++;
	}
	if (c < size)
		dst[c] = '\0';
	while (src[c] != '\0')
		c++;
	return (c);
}
