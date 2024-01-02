/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:34:18 by asidio            #+#    #+#             */
/*   Updated: 2024/01/02 15:16:06 by asidio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
//#include<unistd.h>

//void	ft_putchar_fd(char c, int fd);

int	ft_ptrl(unsigned long long ptr)
{
	int	i;

	i = 0;
	while (ptr != 0)
	{
		ptr /= 16;
		i++;
	}
	return (i);
}

void	ft_putptr(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_putptr(ptr / 16);
		ft_putptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar_fd((ptr + '0'), 1);
		else
			ft_putchar_fd((ptr - 10 + 'a'), 1);
	}
}

int	ft_printptr(unsigned long long ptr)
{
	int	print_l;

	print_l = 0;
	print_l += write(1, "0x", 2);
	if (ptr == 0)
		print_l += write(1, "0", 1);
	else
	{
		ft_putptr(ptr);
		print_l += ft_ptrl(ptr);
	}
	return (print_l);
}
