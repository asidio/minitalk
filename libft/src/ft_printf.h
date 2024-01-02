/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:12:25 by asidio            #+#    #+#             */
/*   Updated: 2023/02/20 18:35:35 by asidio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_formats(va_list args, const char format);
int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_printptr(unsigned long long ptr);
int		ft_printnbr(int n);
int		ft_unsigned(unsigned int n);
int		ft_printhex(unsigned int num, const char format);
int		ft_printper(void);
void	ft_putptr(unsigned long long ptr);
int		ft_ptrl(unsigned long long ptr);
char	*ft_utoa(unsigned int n);
int		ft_numl(unsigned	int num);
void	ft_puthex(unsigned int num, const char format);
int		ft_hexlen(unsigned	int num);

#endif
