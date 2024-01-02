/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:50:57 by asidio            #+#    #+#             */
/*   Updated: 2023/01/18 11:51:10 by asidio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*int main()
{
    printf("return: %i      sol: 0\n", ft_isalpha('1'));
    printf("return: %i      sol: 1\n", ft_isalpha('a'));
    printf("return: %i      sol: 1\n", ft_isalpha('Z'));
}*/
