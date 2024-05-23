/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camalfit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:08:58 by camalfit          #+#    #+#             */
/*   Updated: 2024/03/01 17:56:18 by camalfit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < (n - 1))
	{
		if (s1[i] == '\0')
			return ((unsigned char) s1[i] -(unsigned char) s2[i]);
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
/*
int main() {
    const char *str1 = "string1";
    const char *str2 = "string2";
    int result;

    result = ft_strcmp(str1, str2);
    if(result <  0) {
        printf("\nFirst string is less than the second.\n");
    } else if(result ==  0) {
        printf("\nFirst string is equal to the second.\n");
    } else {
        printf("\nFirst string is greater than the second.\n");
    }

    return  0;
}*/
