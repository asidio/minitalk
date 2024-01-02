/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:33:21 by asidio            #+#    #+#             */
/*   Updated: 2023/02/01 11:54:00 by asidio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = ft_strlen(s);
	while (i <= l)
	{
		if (s[i] == (char)c)
			return ((char *) &s[i]);
		i++;
	}
	return (NULL);
}
