/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:35:18 by asidio            #+#    #+#             */
/*   Updated: 2023/01/31 11:20:03 by asidio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stddef.h>
// #include <stdio.h>
// #include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*c;

	c = malloc ((ft_strlen(s)) + 1);
	if (c == NULL)
		return (0);
	ft_strlcpy (c, s, (ft_strlen(s) + 1));
	return (c);
}
