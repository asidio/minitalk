/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:36:26 by asidio            #+#    #+#             */
/*   Updated: 2023/01/25 18:16:53 by asidio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stddef.h>
// #include<stdio.h>
// #include <stdlib.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i] != '\0')
	{
		f (i, &s[i]);
		i++;
	}
}
