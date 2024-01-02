/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:54:10 by asidio            #+#    #+#             */
/*   Updated: 2023/02/03 14:11:32 by asidio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stddef.h>
// #include<stdio.h>
// #include <stdlib.h>
#include "libft.h"

int	n_len(int a)
{
	int	i;

	i = 0;
	if (a < 0)
	{
		i++;
		a = -a;
	}
	while (a > 0)
	{
		a /= 10;
		i++;
	}
	return (i);
}

char	*init_str(int n)
{
	char	*str;
	int		nlen;

	nlen = n_len(n);
	str = (char *)malloc(sizeof(char) * (nlen + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		str[nlen] = '\0';
		return (str);
	}
	else
	{
		str[nlen] = 0;
		return (str);
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		nlen;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nlen = n_len(n);
	str = init_str(n);
	if (!str)
		return (NULL);
	if (n < 0)
		n = -n;
	while (n != 0)
	{
		str[nlen - 1] = (n % 10) + '0';
		n /= 10;
		nlen--;
	}
	return (str);
}
