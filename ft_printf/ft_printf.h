/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansoulai <ansoulai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:22:07 by ansoulai          #+#    #+#             */
/*   Updated: 2024/05/20 22:40:36 by ansoulai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define END "\033[0m"

int		ft_printf(const char *format, ...);
int		ft_putnbr(int n);
int		ft_putnbr_u(unsigned int n);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr_base(unsigned int nbr, char Xx);
int		ft_putaddr(void *addr);
int		ft_isdigit(int c);
long	ft_atoi(const char *str);
void	chech_pid(char *str);

#endif
