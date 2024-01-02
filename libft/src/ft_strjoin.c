/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:37:45 by asidio            #+#    #+#             */
/*   Updated: 2023/02/01 14:22:46 by asidio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stddef.h>
// #include<stdio.h>
// #include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		l;
	int		i;
	int		j;

	l = ft_strlen(s1) + ft_strlen(s2);
	s = malloc(l + 1);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}
/*int main()
{
    printf("return: %s      sol: hola ciao\n", ft_strjoin("hola", " ciao"));
}*/
