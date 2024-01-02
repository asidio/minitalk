/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:53:31 by asidio            #+#    #+#             */
/*   Updated: 2023/01/18 11:53:51 by asidio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*int main()
{
    printf("return: %i      sol: 1\n", ft_isprint('a'));
    printf("return: %i      sol: 0\n", ft_isprint('\n'));
}*/
