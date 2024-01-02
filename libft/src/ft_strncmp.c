/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:44:36 by asidio            #+#    #+#             */
/*   Updated: 2023/02/01 12:32:15 by asidio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stddef.h>
// #include<stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && i < n - 1 && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
/*int main()
{
    printf("return 1: %d        sol: 0\n", ft_strncmp("hola", "hola", 6));
    printf("return 2: %d        sol: 10\n", ft_strncmp("hola", "hello", 7));
    printf("return 2: %d        sol: -10\n", ft_strncmp("hello", "hola", 7));
}*/
