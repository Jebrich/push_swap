/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:57:26 by osericol          #+#    #+#             */
/*   Updated: 2023/04/26 12:05:59 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle(va_list args, const char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar((char)va_arg(args, int));
	else if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (c == 'x')
		count += ft_puthex(va_arg(args, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		count += ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (c == 'u')
		count += ft_putunsigned(va_arg(args, unsigned int));
	else if (c == 'p')
		count += ft_putpointer(va_arg(args, unsigned long), "0123456789abcdef");
	else if (c == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (!format)
		return (0);
	count = 0;
	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_handle(args, format[i]);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
