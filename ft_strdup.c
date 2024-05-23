/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camalfit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:44:11 by camalfit          #+#    #+#             */
/*   Updated: 2024/02/27 11:44:28 by camalfit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	size_t	size;

	size = ft_strlen(s1);
	cpy = (char *)malloc(size * sizeof(char) + 1);
	if (cpy == NULL)
		return (NULL);
	ft_memcpy(cpy, s1, size);
	cpy[size] = '\0';
	return (cpy);
}
