/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:11:39 by asidio            #+#    #+#             */
/*   Updated: 2023/02/20 17:11:41 by asidio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
//#include<unistd.h>

//void    ft_putchar_fd(char c, int fd);

int	ft_hexlen(unsigned int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

void	ft_puthex(unsigned int n, const char format)
{
	if (n >= 16)
	{
		ft_puthex(n / 16, format);
		ft_puthex(n % 16, format);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd((n + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((n - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((n - 10 + 'A'), 1);
		}
	}
}

int	ft_printhex(unsigned int n, const char format)
{
	if (n == 0)
		return (write(1, "0", 1));
	else
		ft_puthex(n, format);
	return (ft_hexlen(n));
}
