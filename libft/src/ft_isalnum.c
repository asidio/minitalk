/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:45:14 by asidio            #+#    #+#             */
/*   Updated: 2023/01/18 11:48:55 by asidio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*int main()
{
    printf("return: %i      sol: 1\n", ft_isalnum('1'));
    printf("return: %i      sol: 1\n", ft_isalnum('a'));
    printf("return: %i      sol: 1\n", ft_isalnum('Z'));
    printf("return: %i      sol: 0\n", ft_isalnum('\n'));
}*/
