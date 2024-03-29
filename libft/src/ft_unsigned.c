/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:11:58 by asidio            #+#    #+#             */
/*   Updated: 2023/02/20 17:12:00 by asidio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
//#include<stdlib.h>
//#include<unistd.h>

//int ft_printstr(char *str);

int	ft_numl(unsigned int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_utoa(unsigned int n)
{
	char	*num;
	int		l;

	l = ft_numl(n);
	num = malloc(l + 1);
	if (!num)
		return (0);
	num[l] = '\0';
	while (n != 0)
	{
		num[l - 1] = n % 10 + '0';
		n /= 10;
		l--;
	}
	return (num);
}

int	ft_unsigned(unsigned int n)
{
	int		print_l;
	char	*num;

	print_l = 0;
	if (n == 0)
		print_l += write(1, "0", 1);
	else
	{
		num = ft_utoa(n);
		print_l += ft_printstr(num);
		free (num);
	}
	return (print_l);
}
