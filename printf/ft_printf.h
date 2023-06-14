/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:58:15 by osericol          #+#    #+#             */
/*   Updated: 2023/04/26 12:06:00 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stddef.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putunsigned(unsigned int n);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_puthex(unsigned long n, char *hex);
int	ft_putpointer(unsigned long n, char *ptr);
int	ft_handle(va_list args, const char c);
#endif 
