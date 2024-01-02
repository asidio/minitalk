/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:57:53 by asidio            #+#    #+#             */
/*   Updated: 2023/02/01 12:34:29 by asidio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}
/*int main()
{
    printf("return: %c      sol: a\n", ft_tolower('A'));
    printf("return: %c      sol: 1\n", ft_tolower('1'));
}*/
