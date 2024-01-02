/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:53:03 by asidio            #+#    #+#             */
/*   Updated: 2023/01/18 11:53:15 by asidio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*int main()
{
    printf("return: %i      sol: 1\n", ft_isdigit('0'));
    printf("return: %i      sol: 0\n", ft_isdigit('a'));
    printf("return: %i      sol: 1\n", ft_isdigit('9'));
}*/
