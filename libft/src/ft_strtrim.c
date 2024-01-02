/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:48:34 by asidio            #+#    #+#             */
/*   Updated: 2023/02/01 15:29:56 by asidio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stddef.h>
// #include<stdio.h>
// #include <stdlib.h>
#include "libft.h"

int	is_in_string(char c, char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*strcast;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && is_in_string(s1[i], set))
		i++;
	j = ft_strlen(s1) - 1;
	while (j > i && is_in_string(s1[j], set))
		j--;
	strcast = (char *)malloc((j - i + 2) * sizeof(char));
	if (!strcast)
		return (NULL);
	k = 0;
	while (i <= j)
	{
		strcast[k++] = s1[i];
		i++;
	}
	strcast[k] = '\0';
	return (strcast);
}
