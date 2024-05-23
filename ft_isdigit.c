/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camalfit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:31:55 by camalfit          #+#    #+#             */
/*   Updated: 2024/02/19 14:39:04 by camalfit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_isdigit(int i)
{
	if (i < '0' || i > '9')
	{
		return (0);
	}
	return (1);
}
/*int	main()
{
	int	test;
	int character = '1';
	test = ft_isdigit(character);
	printf("%d", test);
	return (0);
}*/
