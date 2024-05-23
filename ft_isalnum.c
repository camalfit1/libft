/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camalfit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:40:31 by camalfit          #+#    #+#             */
/*   Updated: 2024/02/19 15:34:22 by camalfit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_isalnum(int i)
{
	if (i >= '0' && i <= '9')
	{
		return (1);
	}
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
	{
		return (1);
	}
	return (0);
}
/*
int main()
{
	int test;
	int character = '1';
	test = ft_isalnum(character);
	printf("%d", test);
	return (0);
}*/
