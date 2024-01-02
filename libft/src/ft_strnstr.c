/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:45:53 by asidio            #+#    #+#             */
/*   Updated: 2024/01/02 15:17:00 by asidio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char*s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	if (len == 0)
		return (NULL);
	while (s1[i] != '\0' && i < len)
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i + j] == s2[j] && (i + j) < len)
			{
				if (s2[j + 1] == '\0')
					return ((char *)&s1[i]);
				j++;
			}
			else
				break ;
		}
		i++;
	}
	return (0);
}
/*int main()
{
    printf("return 1: %d\n", ft_strnstr("ciao hola hello", "hola", 12));
    printf("return 2: %d\n", ft_strnstr("ciao hola hello", "hello", 19));
    printf("sol: r1 < r2, r2-r1 = 6\n");
}*/
