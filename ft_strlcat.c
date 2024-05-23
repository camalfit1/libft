/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camalfit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:06:42 by camalfit          #+#    #+#             */
/*   Updated: 2024/03/01 15:06:54 by camalfit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	c;
	size_t	j;

	c = 0;
	j = 0;
	while (dst[c] && c < size)
		c++;
	while (src[j] && (c + j + 1) < size)
	{
		dst[c + j] = src[j];
		j++;
	}
	if (c < size)
		dst[c + j] = '\0';
	return (c + ft_strlen(src));
}
