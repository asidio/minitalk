/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:41:22 by asidio            #+#    #+#             */
/*   Updated: 2023/01/31 12:13:03 by asidio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stddef.h>
// #include<stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (size > i)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*int main()
{
    char d[5];
    char s[] = "hola";
    int f = ft_strlcpy(d, s, 5);
    printf("return: %d      sol: 4\ndest: %s        sol: hola\n", f, d);
}*/
