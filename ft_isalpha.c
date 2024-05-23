/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camalfit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:10:23 by camalfit          #+#    #+#             */
/*   Updated: 2024/02/19 14:37:31 by camalfit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalpha(int i)
{
	if ((i < 'a' || i > 'z') && (i < 'A' || i > 'Z'))
	{
		return (0);
	}
	return (1);
}
/*
int	main()
{
	int	test;
	int character = 's';
	test = ft_isalpha (character);
	printf("%d", test);
	return (0);
}*/
