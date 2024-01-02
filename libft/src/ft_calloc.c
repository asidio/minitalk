/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:44:44 by asidio            #+#    #+#             */
/*   Updated: 2023/01/31 11:19:03 by asidio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*l;

	l = (void *)malloc(nelem * elsize);
	if (!l || (FT_SIZE_MAX == elsize && FT_SIZE_MAX == nelem))
		return (NULL);
	ft_bzero(l, nelem * elsize);
	return (l);
}
