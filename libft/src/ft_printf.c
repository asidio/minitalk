/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:11:23 by asidio            #+#    #+#             */
/*   Updated: 2024/01/02 15:15:33 by asidio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
//#include <unistd.h>
//#include <stdarg.h>
//#include <stdlib.h>

/*int ft_printchar(char c);
int ft_printstr(char *str);
int ft_printper();
int ft_printptr(unsigned long long ptr);
int ft_unsigned(unsigned int n);
int ft_printnbr(int n);
int ft_printhex(unsigned int n, const char format);
*/
int	ft_formats(va_list args, const char format)
{
	int	print_l;

	print_l = 0;
	if (format == 'c')
		print_l += ft_printchar(va_arg(args, int));
	else if (format == 's')
		print_l += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		print_l += ft_printptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_l += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		print_l += ft_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_l += ft_printhex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_l += ft_printper();
	return (print_l);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		print_l;
	int		i;

	i = 0;
	print_l = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			print_l += ft_formats(args, format[i + 1]);
			i++;
		}
		else
			print_l += ft_printchar(format[i]);
		i++;
	}
	va_end(args);
	return (print_l);
}
