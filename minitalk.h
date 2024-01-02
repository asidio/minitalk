/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:10:58 by asidio            #+#    #+#             */
/*   Updated: 2024/01/02 15:11:01 by asidio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdio.h>
# include <unistd.h>
# include <signal.h>
# include <stdlib.h>

# include "libft/src/libft.h"
# include "libft/src/ft_printf.h"

void	ft_atob(int pid, char c);
void	ft_btoa(int sig);

#endif
