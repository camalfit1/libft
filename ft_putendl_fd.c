/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camalfit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:37:36 by camalfit          #+#    #+#             */
/*   Updated: 2024/03/01 15:37:49 by camalfit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	c;

	c = 0;
	while (s[c] != '\0')
	{
		write(fd, &s[c], 1);
		c++;
	}
	write(fd, "\n", 1);
}