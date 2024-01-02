/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:11:41 by asidio            #+#    #+#             */
/*   Updated: 2023/01/18 12:13:08 by asidio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stddef.h>
// #include<stdio.h>
#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((char *)src)[i] != c)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	if (((char *)src)[i] == c)
	{
		((char *)dest)[i] = ((char *)src)[i];
		return (dest + i + 1);
	}
	return (0);
}
