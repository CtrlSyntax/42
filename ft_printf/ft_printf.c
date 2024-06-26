/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansoulai <ansoulai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:20:49 by ansoulai          #+#    #+#             */
/*   Updated: 2024/05/20 22:12:04 by ansoulai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	check_flags(va_list args, const char format, int *len)
{
	if (format == 'd' || format == 'i')
		*len += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		*len += ft_putnbr_u(va_arg(args, unsigned int));
	else if (format == 'c')
		*len += ft_putchar((char)va_arg(args, int));
	else if (format == 's')
		*len += ft_putstr(va_arg(args, char *));
	else if (format == '%')
		*len += ft_putchar(format);
	else if (format == 'x')
		*len += ft_putnbr_base(va_arg(args, int), format);
	else if (format == 'X')
		*len += ft_putnbr_base(va_arg(args, int), format);
	else if (format == 'p')
		*len += ft_putaddr(va_arg(args, void *));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	va_start(args, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			check_flags(args, *format, &len);
		}
		else
			len += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (len);
}
