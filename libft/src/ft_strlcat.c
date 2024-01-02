/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:39:45 by asidio            #+#    #+#             */
/*   Updated: 2023/02/03 14:31:33 by asidio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stddef.h>
// #include<stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!dst && !size)
		return (0);
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*int  main()
{
    char d[9] = "ciao ";
    char s[] = "hola";
    int f = ft_strlcat(d, s, 11);
    printf("return: %d      sol: 9\ndest: %s        sol: ciao hola\n", f, d);
}*/
